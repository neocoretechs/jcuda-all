package jcuda.jcublas.samples;
import static jcuda.jcublas.JCublas2.cublasCreate;
import static jcuda.jcublas.JCublas2.cublasDestroy;
import static jcuda.jcublas.JCublas2.cublasGetVector;
import static jcuda.jcublas.JCublas2.cublasSetVector;
import static jcuda.jcublas.JCublas2.cublasDgemm;
import static jcuda.jcublas.cublasOperation.CUBLAS_OP_N;
import static jcuda.runtime.JCuda.cudaFree;
import static jcuda.runtime.JCuda.cudaMalloc;

import jcuda.Pointer;
import jcuda.Sizeof;
import jcuda.jcublas.JCublas2;
import jcuda.jcublas.MatrixCu;
import jcuda.jcublas.MatrixInterface;
import jcuda.jcublas.cublasHandle;
import jcuda.samples.utils.JCudaSamplesUtils;
/**
 * This is a sample class demonstrating the application of JCublas2 for
 * performing a matrix dot product via cublasDgemm
 */
public class MatrixCuTest {
    public static void main(String args[])
    {
        JCublas2.setExceptionsEnabled(true);
        //testMatrix(5000,5000);
        testMatrix();
        MatrixCu.free();
    }

    /**
     * Test the JCublas sgemm operation for matrices of size n x x
     * 
     * @param n The matrix size
     */
    public static void testMatrix(int row, int col)
    {

        System.out.println("Creating input data...");

        double h_A[] = JCudaSamplesUtils.createRandomDoubleData(row*col);
        double h_B[] = JCudaSamplesUtils.createRandomDoubleData(row*col);
        double h_C[] = JCudaSamplesUtils.createRandomDoubleData(row*col);   
        double h_C_ref[] = h_C.clone();
        MatrixCu m1 = new MatrixCu(row,col,h_A);
        MatrixCu m2 = new MatrixCu(row,col,h_B);
        long stim1 = System.currentTimeMillis();
        System.out.println("Performing Matrix dot CUBLAS...");
        MatrixInterface m3 = m1.dot(m2);
        System.out.println("total time="+(System.currentTimeMillis()-stim1));
        
        stim1 = System.currentTimeMillis();
        System.out.println("Performing Dgemm with Java...");
        dgemmJava(row, col, 1, h_A, h_B, 0, h_C_ref);
        System.out.println("total time="+(System.currentTimeMillis()-stim1));
        boolean passed = JCudaSamplesUtils.equalByNorm(h_C, h_C_ref);
        System.out.println("testDgemm " + (passed ? "PASSED" : "FAILED"));
        
        passed = JCudaSamplesUtils.equalByNorm(m3.toArray(), h_C_ref);
        System.out.println("test MatrixCu " + (passed ? "PASSED" : "FAILED"));
        
    }
    public static void testMatrix()
    {

        System.out.println("Creating input data...");

        double h_A[] = JCudaSamplesUtils.createRandomDoubleData(16385); //
        double h_B[] = JCudaSamplesUtils.createRandomDoubleData(16385*300);
       // double h_C[] = JCudaSamplesUtils.createRandomDoubleData(16384*300);   
        //double h_C_ref[] = h_C.clone();
        for(int i = 0;i < 1000000; i++) {
        MatrixCu m0 = new MatrixCu(16384,1,h_A);
        MatrixCu m1 = m0.addBias(); //single column matrix, ad bias
        MatrixCu m2 = new MatrixCu(300,16385,h_B);
        long stim1 = System.currentTimeMillis();
        System.out.println("Performing Matrix dot CUBLAS...");
        MatrixInterface m3 = m2.dot(m1);
        System.out.println("total time="+(System.currentTimeMillis()-stim1)+" "+m3.toArray());
        long usedMemory = Runtime.getRuntime().totalMemory()-Runtime.getRuntime().freeMemory();
        long freeMemory = Runtime.getRuntime().maxMemory() - usedMemory;
        System.out.println("Used Memory " + usedMemory+" free memory "+ freeMemory);
        }
       // stim1 = System.currentTimeMillis();
        //System.out.println("Performing Dgemm with Java...");
        //dgemmJava(16384, 300, 1, h_A, h_B, 0, h_C_ref);
        //System.out.println("total time="+(System.currentTimeMillis()-stim1));
        //boolean passed = JCudaSamplesUtils.equalByNorm(h_C, h_C_ref);
        //System.out.println("testDgemm " + (passed ? "PASSED" : "FAILED"));
        
        //passed = JCudaSamplesUtils.equalByNorm(m3.toArray(), h_C_ref);
        //System.out.println("test MatrixCu " + (passed ? "PASSED" : "FAILED"));
        
    }
    private static void dgemmJava(
            int row, int col, double alpha, double A[], double B[], double beta, double C[])
        {
            for (int i = 0; i < row; ++i)
            {
                for (int j = 0; j < col; ++j)
                {
                    float prod = 0;
                    for (int k = 0; k < col; ++k)
                    {
                        prod += A[k * row + i] * B[j * row + k];
                    }
                    C[j * row + i] = alpha * prod + beta * C[j * row + i];
                }
            }
        }
 
}
