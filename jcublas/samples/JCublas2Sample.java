package jcuda.jcublas.samples;
import static jcuda.jcublas.JCublas2.cublasCreate;
import static jcuda.jcublas.JCublas2.cublasDestroy;
import static jcuda.jcublas.JCublas2.cublasGetVector;
import static jcuda.jcublas.JCublas2.cublasSetVector;
import static jcuda.jcublas.JCublas2.cublasSgemm;
import static jcuda.jcublas.cublasOperation.CUBLAS_OP_N;
import static jcuda.runtime.JCuda.cudaFree;
import static jcuda.runtime.JCuda.cudaMalloc;

import jcuda.Pointer;
import jcuda.Sizeof;
import jcuda.jcublas.JCublas2;
import jcuda.jcublas.cublasHandle;
import jcuda.samples.utils.JCudaSamplesUtils;
/**
 * This is a sample class demonstrating the application of JCublas2 for
 * performing a BLAS 'sgemm' operation, i.e. for computing the matrix <br>
 * <code>C = alpha * A * B + beta * C</code> <br>
 * for single-precision floating point values alpha and beta, and matrices 
 * A, B and C of size 1000x1000.
 */
public class JCublas2Sample {
    public static void main(String args[])
    {
        JCublas2.setExceptionsEnabled(true);
        testSgemm(1000);
    }

    /**
     * Test the JCublas sgemm operation for matrices of size n x x
     * 
     * @param n The matrix size
     */
    public static void testSgemm(int n)
    {
        float alpha = 0.3f;
        float beta = 0.7f;
        int nn = n * n;

        System.out.println("Creating input data...");
        float h_A[] = JCudaSamplesUtils.createRandomFloatData(nn);
        float h_B[] = JCudaSamplesUtils.createRandomFloatData(nn);
        float h_C[] = JCudaSamplesUtils.createRandomFloatData(nn);
        float h_C_ref[] = h_C.clone();
        
        long stim1 = System.currentTimeMillis();
        System.out.println("Performing Sgemm with Java...");
        sgemmJava(n, alpha, h_A, h_B, beta, h_C_ref);
        System.out.println("total time="+(System.currentTimeMillis()-stim1));
        
        stim1 = System.currentTimeMillis();
        System.out.println("Performing Sgemm with JCublas...");
        sgemmJCublas(n, alpha, h_A, h_B, beta, h_C);
        System.out.println("total time="+(System.currentTimeMillis()-stim1));

        boolean passed = JCudaSamplesUtils.equalByNorm(h_C, h_C_ref);
        System.out.println("testSgemm " + (passed ? "PASSED" : "FAILED"));
    }

    /**
     * Implementation of sgemm using JCublas
     */
    private static void sgemmJCublas(
        int n, float alpha, float A[], float B[], float beta, float C[])
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
        cudaMalloc(d_A, nn * Sizeof.FLOAT);
        cudaMalloc(d_B, nn * Sizeof.FLOAT);
        cudaMalloc(d_C, nn * Sizeof.FLOAT);
        System.out.println("Cuda malloc="+(System.currentTimeMillis()-stim));
        
        // Copy the memory from the host to the device
        stim = System.currentTimeMillis();
        cublasSetVector(nn, Sizeof.FLOAT, Pointer.to(A), 1, d_A, 1);
        cublasSetVector(nn, Sizeof.FLOAT, Pointer.to(B), 1, d_B, 1);
        cublasSetVector(nn, Sizeof.FLOAT, Pointer.to(C), 1, d_C, 1);
        System.out.println("Cuda set vectors="+(System.currentTimeMillis()-stim));

        // Execute sgemm
        stim = System.currentTimeMillis();
        Pointer pAlpha = Pointer.to(new float[] { alpha });
        Pointer pBeta = Pointer.to(new float[] { beta });
        System.out.println("Cuda pointers="+(System.currentTimeMillis()-stim));
        
        stim = System.currentTimeMillis();
        cublasSgemm(handle, CUBLAS_OP_N, CUBLAS_OP_N, n, n, n, pAlpha, d_A, n,
            d_B, n, pBeta, d_C, n);
        System.out.println("Cuda cublasSgemm="+(System.currentTimeMillis()-stim));
        
        // Copy the result from the device to the host
        stim = System.currentTimeMillis();
        cublasGetVector(nn, Sizeof.FLOAT, d_C, 1, Pointer.to(C), 1);
        System.out.println("Cuda cublasGetVector="+(System.currentTimeMillis()-stim));

        stim = System.currentTimeMillis();
        // Clean up
        cudaFree(d_A);
        cudaFree(d_B);
        cudaFree(d_C);
        cublasDestroy(handle);
        System.out.println("Cuda cleanup="+(System.currentTimeMillis()-stim));
    }

    /**
     * Simple implementation of sgemm, using plain Java
     */
    private static void sgemmJava(
        int n, float alpha, float A[], float B[], float beta, float C[])
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
