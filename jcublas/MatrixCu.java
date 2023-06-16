package jcuda.jcublas;


import static jcuda.jcublas.JCublas2.cublasCreate;
import static jcuda.jcublas.JCublas2.cublasDestroy;
import static jcuda.jcublas.JCublas2.cublasDgemm;
import static jcuda.jcublas.JCublas2.cublasGetVector;
import static jcuda.jcublas.JCublas2.cublasSetVector;
import static jcuda.jcublas.cublasOperation.CUBLAS_OP_N;
import static jcuda.runtime.JCuda.cudaFree;
import static jcuda.runtime.JCuda.cudaMalloc;

import java.io.Serializable;
import java.util.concurrent.ThreadLocalRandom;


import jcuda.Pointer;
import jcuda.Sizeof;
import jcuda.jcublas.JCublas2;
import jcuda.jcublas.cublasHandle;

/**
 * Implementation of a matrix specifically representing neural net nodes optimized for CUDA.<p/>
 * This matrix is COLUMN-MAJOR order.<p/>
 * We include an activation function specified in the constructor.<br/>
 * We can:<br/>
 * Take a dot product<br/>	   
 * Number of rows in result matrix layer equals rows in this matrix by columns in matrix n.<p/>
 * Number of rows in n has to equal the number of columns in this, the
 * previous layer matrix.<p/>
 * So the matrix is organized by layer+1 node rows by layer column nodes representing weights from
 * column to row in a feedforward network<p/>.
 * The bias is contained in an extra column on creation.<p/>
 * <p/>
 * Randomize the matrix<br/>
 * Generate a single column matrix from a float array<br/>
 * Add bias values<br/>
 * Generate a new matrix based on activation function<br/>
 * Clone<br/>
 * Mutate<br/>
 * Crossbreed<br/>
 * 
 * @author Jonathan Groff (C) NeoCoreTechs 5/2023
 *
 */
public class MatrixCu implements MatrixInterface, Serializable, Cloneable {
	private static final long serialVersionUID = -5112564161732998513L;
	int rows, cols;
	double[] matrix;
    double alpha = 1;
    double beta = 0;
    Pointer pAlpha;
    Pointer pBeta;
	ActivationInterface activationFunction;
	static cublasHandle handle; 
	
	static {
	       JCublas2.setExceptionsEnabled(true);
	       handle = new cublasHandle();
	       cublasCreate(handle);
	}
	
	public static void free() {
	       cublasDestroy(handle);
	}
	
	public MatrixCu(int r, int c, double[] m) {
	     rows = r;
	     cols = c;
	     matrix = m;
	     pAlpha = Pointer.to(new double[] { alpha });
	     pBeta = Pointer.to(new double[] { beta });
	}
	
	MatrixCu(int r, int c, ActivationInterface activationFunction) {
	     rows = r;
	     cols = c;
	     matrix = new double[rows*cols];
	     this.activationFunction = activationFunction;
	     pAlpha = Pointer.to(new double[] { alpha });
	     pBeta = Pointer.to(new double[] { beta });
	}
	/**
	 * Copy row/col order to our column-major matrix layout 
	 * @param m double 2D array indexed by m[row][col]
	 * @param activationFunction
	 */
	public MatrixCu(double[][] m, ActivationInterface activationFunction) {
	      matrix = new double[m.length*m[0].length];
	      rows = m.length;
	      cols = m[0].length;
		  this.activationFunction = activationFunction;
		  int k = 0;
		  for(int i = 0; i < cols; i++) {
			  for(int j = 0; j < rows; j++) {
				  matrix[k++] = m[j][i];
			  }
		  }
	}
	  /**
	   * Number of rows in result matrix layer equals rows in this matrix by columns in matrix n.<p/>
	   * Number of rows in n has to equal the number of columns in this, the
	   * previous layer matrix.<p/>
	   * So the matrix is organized by layer+1 node rows by layer column nodes representing weights from
	   * column to row in a feedforward network<p/>.
	   * The bias is contained in an extra column on creation.<p/>
	   * @param n The matrix to multiply and sum against this one
	   * @return The result of the weighted sum of the elements in this matrix multiplied by matrix n
	   */
	@Override
	public MatrixInterface dot(MatrixInterface n) {
	    MatrixCu result = new MatrixCu(rows, n.getColumns(), activationFunction);     
	    if(cols != n.getRows()) {
	    	 throw new RuntimeException("Source columns "+cols+" not equal to target rows "+n.getRows()+" for matrix dot product");
	    }
		Pointer d_A = new Pointer();
		Pointer d_B = new Pointer();
		Pointer d_C = new Pointer();
		cudaMalloc(d_A, rows * cols * Sizeof.DOUBLE);
		cudaMalloc(d_B, n.getRows() * n.getColumns() * Sizeof.DOUBLE);
		cudaMalloc(d_C, result.getRows() * result.getColumns() * Sizeof.DOUBLE);
	    // Copy the memory from the host to the device
		cublasSetVector(rows*cols, Sizeof.DOUBLE, Pointer.to(matrix), 1, d_A, 1);
		cublasSetVector(n.getRows()*n.getColumns(), Sizeof.DOUBLE, Pointer.to(n.toArray()), 1, d_B, 1);
		cublasSetVector(result.getRows()*result.getColumns(), Sizeof.DOUBLE, Pointer.to(result.matrix), 1, d_C, 1);
		// Execute gemm
		//long stim = System.currentTimeMillis();
	    /*
	     for(int i = 0; i < rows; i++) {
	        for(int j = 0; j < n.getColumns(); j++) {
	              double sum = 0;
	              for(int k = 0; k < cols; k++) {
	                 sum += matrix[i][k]*n.get(k,j);
	              }  
	              result.matrix[i][j] = sum;
	        }
	     }
	     return result;
	     */
        cublasDgemm(handle, CUBLAS_OP_N, CUBLAS_OP_N, rows, n.getColumns(), cols, pAlpha, d_A, rows, d_B, n.getRows(), pBeta, d_C, result.getRows());
        //System.out.println("Cuda cublasDgemm="+(System.currentTimeMillis()-stim));
            
        // Copy the result from the device to the host
        cublasGetVector(result.getRows()*result.getColumns(), Sizeof.DOUBLE, d_C, 1, Pointer.to(result.matrix), 1);
        //System.out.println("Cuda cublasGetVector="+(System.currentTimeMillis()-stim));

        // Clean up
        cudaFree(d_A);
        cudaFree(d_B);
        cudaFree(d_C);
        return result;
	}
	 
	@Override
	public int getRows() {
		return rows;
	}
	
	@Override
	public int getColumns() {
		return cols;
	}
	
	@Override
	public ActivationInterface getActivation() {
		return activationFunction;
	}
	
	@Override
	/**
	* Use incRan to generate full range of possible values -1 to 1 for greatest diversity. 
	*/
	public void randomize() {
		int k = 0;
	     for(int i = 0; i < rows; i++) {
	         for(int j = 0; j < cols; j++) {
	            matrix[k++] = incRan(); 
	         }
	     }
		/* Xavier init. targeted at a backpropagating system using the sigmoid function.
		 * seems of little benefit here as widest possible range of values yields best evolution.
		double stdDev = Math.sqrt(2.0 / (rows + cols));
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				matrix[i][j] = ThreadLocalRandom.current().nextGaussian() * stdDev;
			}
		}
		*/
	}
	/**
	 * Uses the activation function from this matrix and creates a new one with a single column from input  
	 * @param arr array to form new matrix
	 * @return Single column matrix with activation from 'this'
	 */
	@Override
	public MatrixInterface singleColumnMatrixFromArray(double[] arr) {
	      MatrixCu n = new MatrixCu(arr.length, 1, activationFunction);
	      for(int i = 0; i < arr.length; i++) {
	         n.matrix[i] = arr[i]; 
	      }
	      return n;
	}
	   
	@Override
	public double[] toArray() {
	      return matrix;
	}
	/**
	 * Create a new 1 column matrix with rows+1 of this matrix.  
	 * @return The 1 column, rows+1 matrix with elements from column 0 of each row and bias 1 in column 0 of rows+1.
	 */
	@Override
	public MatrixCu addBias() {
		MatrixCu n = new MatrixCu(rows+1, 1, activationFunction);
	    for(int i = 0; i < cols; i++) {
	    		  n.matrix[i] = matrix[i*rows]; 
	    }
	    n.matrix[n.matrix.length-1] = 1;
	    return n;
	}
	/**
	 * Perform the activation function on each column of each row of this matrix.  
	 * @return the result of the activation function on each element of each column by each row of this matrix.
	 */
	@Override
	public MatrixInterface activate() {
	      MatrixCu n = new MatrixCu(rows, cols, activationFunction);
	      for(int i = 0; i < matrix.length; i++) {
	            n.matrix[i] = activationFunction.activate(matrix[i]);
	      }
	      return n;
	}
	   
	 /**
	  * Ultimately, mutation should be rare and relies on 2 parameters: mutation probability from parameter, or
	  * the probability that mutation will occur at all, whch should be a few percent or less, and then if
	  * mutation is to occur, the mutation rate here, or the probability that any matrix cell can be mutated,
	  * which means supplying a new random value in the range -1 to 1.
	  * If a random value exceeds mutation rate from parameters, select a new random value for the matrix element
	  * @param mutationRate
	  */
	@Override
	public void mutate(float mutationRate) {
	      for(int i = 0; i < matrix.length; i++) {
	            float rand = ThreadLocalRandom.current().nextFloat();
	            if(rand<mutationRate) {
	               matrix[i] = incRan();
	            }
	      }
	}
	/**
	 * Perform a crossover with the partner Matrix.
	 * Choose from random points or
	 * Arithmatic crossover: weighted average of this and partner nodes.
	 * offs = weight1.multiply(alpha).add(weight2.multiply(1-alpha)).
	 * Where alpha is weighting factor from 0 to 1. 
	 * alpha 0 = favor second parent.
	 * alpha 1 = favor first parent.
	 * alpha.5 = equal blending. 
	 * A random alpha introduces max variation. An alpha with more weight to favor better parent.
	 * @param partner
	 * @return The result of the crossover
	 */
	@Override
	public MatrixCu doCross(MatrixInterface partner) {
	      MatrixCu child = new MatrixCu(rows, cols, activationFunction);  
	      double select = ThreadLocalRandom.current().nextGaussian();
	      if(select < .25) {
	    		  int colLim = cols;
	    		  int colInc = cols/rows;
	    		  for(int i = 0; i < rows; i++) {
			         for(int j = 0;  j < cols; j++) {
			            if(j > colLim) {
			              child.matrix[j*rows+i] = matrix[j*rows+i]; 
			            } else {
			              child.matrix[j*rows+i] = partner.get(i,j);
			            }
			         }
			         colLim -= colInc;
			         if(colLim < 0)
			        	 colLim = 0;
	    		  }
	      } else {
	    	  if(select < .5) {
	    		  double alpha = ThreadLocalRandom.current().nextDouble();
	    		  for(int i = 0; i < rows; i++) {
	    			  for(int j = 0;  j < cols; j++) {
	    				  child.matrix[j*rows+i] = (matrix[j*rows+i] * alpha) + (partner.get(i,j) * (1 - alpha));
	    			  }
	    		  }
	    	  } else {
	    		  int randC = ThreadLocalRandom.current().nextInt(cols);
	    		  int randR = ThreadLocalRandom.current().nextInt(rows);
	    		  for(int i = 0; i < rows; i++) {
			         for(int j = 0;  j < cols; j++) {
			            if((i < randR) || (i == randR && j <= randC)) {
			               child.matrix[j*rows+i] = matrix[j*rows+i]; 
			            } else {
			              child.matrix[j*rows+i] = partner.get(i,j);
			            }
			         }
	    		  }
	    	  }
	      }
	      return child;
	}
	
	@Override  
	protected MatrixCu clone() {
	      MatrixCu clone = new MatrixCu(rows, cols, activationFunction);
	      for(int i = 0; i < rows; i++) {
	         for(int j = 0; j < cols; j++) {
	            clone.matrix[j*rows+i] = matrix[j*rows+i]; 
	         }
	      }
	      return clone;
	}
	   
	@Override
	public double incRan() {
		return (2 * ThreadLocalRandom.current().nextDouble() - 1);   // between -1.0 and 1.0
	}
	   
	public String toString() {
		   StringBuilder s = new StringBuilder("\r\nMatrix:\r\n");
		   for(int i = 0; i < rows; i++) {
			   s.append("["+i+"] ");
			   for(int j = 0; j < cols; j++) {
			      s.append(matrix[j*rows+i]+" "); 
			   }
			   s.append("\r\n");
		   }
		   s.append("End Matrix\r\n");
		   return s.toString();
	}

	@Override
	public double get(int i, int j) {
		return matrix[j*rows+i];
	}

	@Override
	public void put(int i, int j, double f) {
		matrix[j*rows+i] = f;	
	}
}
