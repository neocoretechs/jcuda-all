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
 * performing a BLAS 'dgemm' operation, i.e. for computing the matrix <br>
 * <code>C = alpha * A * B + beta * C</code> <br>
 * for double-precision floating point values alpha and beta, and matrices 
 * A, B and C of size 1000x1000.
 */
public class JCublas2SampleD {
    public static void main(String args[])
    {
        JCublas2.setExceptionsEnabled(true);
        testDgemm(1000);
    }

    /**
     * Test the JCublas sgemm operation for matrices of size n x x
     * 
     * @param n The matrix size
     */
    public static void testDgemm(int n)
    {
        double alpha = 1;//0.3;
        double beta = 0;//0.7;
        int nn = n * n;

        System.out.println("Creating input data...");
        double h_A[] = JCudaSamplesUtils.createRandomDoubleData(nn);
        double h_B[] = JCudaSamplesUtils.createRandomDoubleData(nn);
        double h_C[] = JCudaSamplesUtils.createRandomDoubleData(nn);
        double h_C_ref[] = h_C.clone();
        
        long stim1 = System.currentTimeMillis();
        System.out.println("Performing Dgemm with Java...");
        dgemmJava(n, alpha, h_A, h_B, beta, h_C_ref);
        System.out.println("total time="+(System.currentTimeMillis()-stim1));
        
        stim1 = System.currentTimeMillis();
        System.out.println("Performing Dgemm with JCublas...");
        dgemmJCublas(n, alpha, h_A, h_B, beta, h_C);
        System.out.println("total time="+(System.currentTimeMillis()-stim1));
        
       MatrixCu m1 = new MatrixCu(n,n,h_A);
       MatrixCu m2 = new MatrixCu(n,n,h_B);
       MatrixInterface m3 = m1.dot(m2);

        boolean passed = JCudaSamplesUtils.equalByNorm(h_C, h_C_ref);
        System.out.println("testDgemm " + (passed ? "PASSED" : "FAILED"));
        
        passed = JCudaSamplesUtils.equalByNorm(m3.toArray(), h_C_ref);
        System.out.println("test MatrixCu " + (passed ? "PASSED" : "FAILED"));
        
    }

    /**
     * Implementation of dgemm using JCublas
     */
    private static void dgemmJCublas(
        int n, double alpha, double A[], double B[], double beta, double C[])
    {
        int nn = n * n;
        long stim = System.currentTimeMillis();
        // Create a CUBLAS handle
        cublasHandle handle = new cublasHandle();
        cublasCreate(handle);
        System.out.println("cublas Handle create="+(System.currentTimeMillis()-stim));
        
        // Allocate memory on the device
        stim = System.currentTimeMillis();
        Pointer d_A = new Pointer();
        Pointer d_B = new Pointer();
        Pointer d_C = new Pointer();
        cudaMalloc(d_A, nn * Sizeof.DOUBLE);
        cudaMalloc(d_B, nn * Sizeof.DOUBLE);
        cudaMalloc(d_C, nn * Sizeof.DOUBLE);
        System.out.println("Cuda malloc="+(System.currentTimeMillis()-stim));
        
        // Copy the memory from the host to the device
        stim = System.currentTimeMillis();
        cublasSetVector(nn, Sizeof.DOUBLE, Pointer.to(A), 1, d_A, 1);
        cublasSetVector(nn, Sizeof.DOUBLE, Pointer.to(B), 1, d_B, 1);
        cublasSetVector(nn, Sizeof.DOUBLE, Pointer.to(C), 1, d_C, 1);
        System.out.println("Cuda set vectors="+(System.currentTimeMillis()-stim));

        // Execute sgemm
        stim = System.currentTimeMillis();
        Pointer pAlpha = Pointer.to(new double[] { alpha });
        Pointer pBeta = Pointer.to(new double[] { beta });
        System.out.println("Cuda pointers="+(System.currentTimeMillis()-stim));
        
        stim = System.currentTimeMillis();
        cublasDgemm(handle, CUBLAS_OP_N, CUBLAS_OP_N, n, n, n, pAlpha, d_A, n,
            d_B, n, pBeta, d_C, n);
        System.out.println("Cuda cublasDgemm="+(System.currentTimeMillis()-stim));
        
        // Copy the result from the device to the host
        stim = System.currentTimeMillis();
        cublasGetVector(nn, Sizeof.DOUBLE, d_C, 1, Pointer.to(C), 1);
        System.out.println("Cuda cublasGetVector="+(System.currentTimeMillis()-stim));
        for(int i = 0; i < C.length; i++) {
        	System.out.println(i+") A="+A[i]+" B="+B[i]+" C="+C[i]);
        }
        stim = System.currentTimeMillis();
        // Clean up
        cudaFree(d_A);
        cudaFree(d_B);
        cudaFree(d_C);
        cublasDestroy(handle);
        System.out.println("Cuda cleanup="+(System.currentTimeMillis()-stim));
    }

    /**
     * Simple implementation of dgemm, using plain Java
     */
    private static void dgemmJava(
        int n, double alpha, double A[], double B[], double beta, double C[])
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                float prod = 0;
                for (int k = 0; k < n; ++k)
                {
                    prod += A[k * n + i] * B[j * n + k];
                }
                C[j * n + i] = alpha * prod + beta * C[j * n + i];
            }
        }
    }
}
