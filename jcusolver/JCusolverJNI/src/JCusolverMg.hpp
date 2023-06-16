/*
* JCusolver - Java bindings for CUSOLVER, the NVIDIA CUDA solver
* library, to be used with JCuda
*
* Copyright (c) 2010-2017 Marco Hutter - http://www.jcuda.org
*
* Permission is hereby granted, free of charge, to any person
* obtaining a copy of this software and associated documentation
* files (the "Software"), to deal in the Software without
* restriction, including without limitation the rights to use,
* copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the
* Software is furnished to do so, subject to the following
* conditions:
*
* The above copyright notice and this permission notice shall be
* included in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
* OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
* HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
* OTHER DEALINGS IN THE SOFTWARE.
*/

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jcuda_jcusolver_JCusolverMg */

#ifndef _Included_jcuda_jcusolver_JCusolverMg
#define _Included_jcuda_jcusolver_JCusolverMg
#ifdef __cplusplus
extern "C" {
#endif
    /*
     * Class:     jcuda_jcusolver_JCusolverMg
     * Method:    cusolverMgCreateNative
     * Signature: (Ljcuda/jcusolver/cusolverMgHandle;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgCreateNative
    (JNIEnv*, jclass, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverMg
     * Method:    cusolverMgDestroyNative
     * Signature: (Ljcuda/jcusolver/cusolverMgHandle;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgDestroyNative
    (JNIEnv*, jclass, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverMg
     * Method:    cusolverMgDeviceSelectNative
     * Signature: (Ljcuda/jcusolver/cusolverMgHandle;I[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgDeviceSelectNative
    (JNIEnv*, jclass, jobject, jint, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverMg
     * Method:    cusolverMgCreateDeviceGridNative
     * Signature: (Ljcuda/jcusolver/cudaLibMgGrid;II[II)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgCreateDeviceGridNative
    (JNIEnv*, jclass, jobject, jint, jint, jintArray, jint);

    /*
     * Class:     jcuda_jcusolver_JCusolverMg
     * Method:    cusolverMgDestroyGridNative
     * Signature: (Ljcuda/jcusolver/cudaLibMgGrid;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgDestroyGridNative
    (JNIEnv*, jclass, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverMg
     * Method:    cusolverMgCreateMatrixDescNative
     * Signature: (Ljcuda/jcusolver/cudaLibMgMatrixDesc;JJJJILjcuda/jcusolver/cudaLibMgGrid;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgCreateMatrixDescNative
    (JNIEnv*, jclass, jobject, jlong, jlong, jlong, jlong, jint, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverMg
     * Method:    cusolverMgDestroyMatrixDescNative
     * Signature: (Ljcuda/jcusolver/cudaLibMgMatrixDesc;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgDestroyMatrixDescNative
    (JNIEnv*, jclass, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverMg
     * Method:    cusolverMgSyevd_bufferSizeNative
     * Signature: (Ljcuda/jcusolver/cusolverMgHandle;III[Ljcuda/Pointer;IILjcuda/jcusolver/cudaLibMgMatrixDesc;Ljcuda/Pointer;II[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgSyevd_1bufferSizeNative
    (JNIEnv*, jclass, jobject, jint, jint, jint, jobjectArray, jint, jint, jobject, jobject, jint, jint, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverMg
     * Method:    cusolverMgSyevdNative
     * Signature: (Ljcuda/jcusolver/cusolverMgHandle;III[Ljcuda/Pointer;IILjcuda/jcusolver/cudaLibMgMatrixDesc;Ljcuda/Pointer;II[Ljcuda/Pointer;JLjcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgSyevdNative
    (JNIEnv*, jclass, jobject, jint, jint, jint, jobjectArray, jint, jint, jobject, jobject, jint, jint, jobjectArray, jlong, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverMg
     * Method:    cusolverMgGetrf_bufferSizeNative
     * Signature: (Ljcuda/jcusolver/cusolverMgHandle;II[Ljcuda/Pointer;IILjcuda/jcusolver/cudaLibMgMatrixDesc;[[II[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgGetrf_1bufferSizeNative
    (JNIEnv*, jclass, jobject, jint, jint, jobjectArray, jint, jint, jobject, jobjectArray, jint, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverMg
     * Method:    cusolverMgGetrfNative
     * Signature: (Ljcuda/jcusolver/cusolverMgHandle;II[Ljcuda/Pointer;IILjcuda/jcusolver/cudaLibMgMatrixDesc;[[II[Ljcuda/Pointer;JLjcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgGetrfNative
    (JNIEnv*, jclass, jobject, jint, jint, jobjectArray, jint, jint, jobject, jobjectArray, jint, jobjectArray, jlong, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverMg
     * Method:    cusolverMgGetrs_bufferSizeNative
     * Signature: (Ljcuda/jcusolver/cusolverMgHandle;III[Ljcuda/Pointer;IILjcuda/jcusolver/cudaLibMgMatrixDesc;[[I[Ljcuda/Pointer;IILjcuda/jcusolver/cudaLibMgMatrixDesc;I[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgGetrs_1bufferSizeNative
    (JNIEnv*, jclass, jobject, jint, jint, jint, jobjectArray, jint, jint, jobject, jobjectArray, jobjectArray, jint, jint, jobject, jint, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverMg
     * Method:    cusolverMgGetrsNative
     * Signature: (Ljcuda/jcusolver/cusolverMgHandle;III[Ljcuda/Pointer;IILjcuda/jcusolver/cudaLibMgMatrixDesc;[[I[Ljcuda/Pointer;IILjcuda/jcusolver/cudaLibMgMatrixDesc;I[Ljcuda/Pointer;JLjcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgGetrsNative
    (JNIEnv*, jclass, jobject, jint, jint, jint, jobjectArray, jint, jint, jobject, jobjectArray, jobjectArray, jint, jint, jobject, jint, jobjectArray, jlong, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverMg
     * Method:    cusolverMgPotrf_bufferSizeNative
     * Signature: (Ljcuda/jcusolver/cusolverMgHandle;II[Ljcuda/Pointer;IILjcuda/jcusolver/cudaLibMgMatrixDesc;I[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgPotrf_1bufferSizeNative
    (JNIEnv*, jclass, jobject, jint, jint, jobjectArray, jint, jint, jobject, jint, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverMg
     * Method:    cusolverMgPotrfNative
     * Signature: (Ljcuda/jcusolver/cusolverMgHandle;II[Ljcuda/Pointer;IILjcuda/jcusolver/cudaLibMgMatrixDesc;I[Ljcuda/Pointer;JLjcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgPotrfNative
    (JNIEnv*, jclass, jobject, jint, jint, jobjectArray, jint, jint, jobject, jint, jobjectArray, jlong, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverMg
     * Method:    cusolverMgPotrs_bufferSizeNative
     * Signature: (Ljcuda/jcusolver/cusolverMgHandle;III[Ljcuda/Pointer;IILjcuda/jcusolver/cudaLibMgMatrixDesc;[Ljcuda/Pointer;IILjcuda/jcusolver/cudaLibMgMatrixDesc;I[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgPotrs_1bufferSizeNative
    (JNIEnv*, jclass, jobject, jint, jint, jint, jobjectArray, jint, jint, jobject, jobjectArray, jint, jint, jobject, jint, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverMg
     * Method:    cusolverMgPotrsNative
     * Signature: (Ljcuda/jcusolver/cusolverMgHandle;III[Ljcuda/Pointer;IILjcuda/jcusolver/cudaLibMgMatrixDesc;[Ljcuda/Pointer;IILjcuda/jcusolver/cudaLibMgMatrixDesc;I[Ljcuda/Pointer;JLjcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgPotrsNative
    (JNIEnv*, jclass, jobject, jint, jint, jint, jobjectArray, jint, jint, jobject, jobjectArray, jint, jint, jobject, jint, jobjectArray, jlong, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverMg
     * Method:    cusolverMgPotri_bufferSizeNative
     * Signature: (Ljcuda/jcusolver/cusolverMgHandle;II[Ljcuda/Pointer;IILjcuda/jcusolver/cudaLibMgMatrixDesc;I[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgPotri_1bufferSizeNative
    (JNIEnv*, jclass, jobject, jint, jint, jobjectArray, jint, jint, jobject, jint, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverMg
     * Method:    cusolverMgPotriNative
     * Signature: (Ljcuda/jcusolver/cusolverMgHandle;II[Ljcuda/Pointer;IILjcuda/jcusolver/cudaLibMgMatrixDesc;I[Ljcuda/Pointer;JLjcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgPotriNative
    (JNIEnv*, jclass, jobject, jint, jint, jobjectArray, jint, jint, jobject, jint, jobjectArray, jlong, jobject);

#ifdef __cplusplus
}
#endif
#endif
