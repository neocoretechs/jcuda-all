/*
 * JCusolver - Java bindings for CUSOLVER, the NVIDIA CUDA solver
 * library, to be used with JCuda
 *
 * Copyright (c) 2010-2016 Marco Hutter - http://www.jcuda.org
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
/* Header for class jcuda_jcusolver_JCusolverSp */

#ifndef _Included_jcuda_jcusolver_JCusolverSp
#define _Included_jcuda_jcusolver_JCusolverSp
#ifdef __cplusplus
extern "C" {
#endif
    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpCreateNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCreateNative
    (JNIEnv*, jclass, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpDestroyNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDestroyNative
    (JNIEnv*, jclass, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpSetStreamNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;Ljcuda/runtime/cudaStream_t;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpSetStreamNative
    (JNIEnv*, jclass, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpGetStreamNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;Ljcuda/runtime/cudaStream_t;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpGetStreamNative
    (JNIEnv*, jclass, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpXcsrissymHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpXcsrissymHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpScsrlsvluHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;FILjcuda/Pointer;[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsrlsvluHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jfloat, jint, jobject, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpDcsrlsvluHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;DILjcuda/Pointer;[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsrlsvluHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jdouble, jint, jobject, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpCcsrlsvluHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;FILjcuda/Pointer;[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsrlsvluHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jfloat, jint, jobject, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpZcsrlsvluHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;DILjcuda/Pointer;[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsrlsvluHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jdouble, jint, jobject, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpScsrlsvqrNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;FILjcuda/Pointer;[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsrlsvqrNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jfloat, jint, jobject, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpDcsrlsvqrNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;DILjcuda/Pointer;[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsrlsvqrNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jdouble, jint, jobject, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpCcsrlsvqrNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;FILjcuda/Pointer;[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsrlsvqrNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jfloat, jint, jobject, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpZcsrlsvqrNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;DILjcuda/Pointer;[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsrlsvqrNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jdouble, jint, jobject, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpScsrlsvqrHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;FILjcuda/Pointer;[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsrlsvqrHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jfloat, jint, jobject, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpDcsrlsvqrHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;DILjcuda/Pointer;[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsrlsvqrHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jdouble, jint, jobject, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpCcsrlsvqrHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;FILjcuda/Pointer;[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsrlsvqrHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jfloat, jint, jobject, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpZcsrlsvqrHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;DILjcuda/Pointer;[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsrlsvqrHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jdouble, jint, jobject, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpScsrlsvcholHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;FILjcuda/Pointer;[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsrlsvcholHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jfloat, jint, jobject, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpDcsrlsvcholHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;DILjcuda/Pointer;[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsrlsvcholHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jdouble, jint, jobject, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpCcsrlsvcholHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;FILjcuda/Pointer;[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsrlsvcholHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jfloat, jint, jobject, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpZcsrlsvcholHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;DILjcuda/Pointer;[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsrlsvcholHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jdouble, jint, jobject, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpScsrlsvcholNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;FILjcuda/Pointer;[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsrlsvcholNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jfloat, jint, jobject, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpDcsrlsvcholNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;DILjcuda/Pointer;[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsrlsvcholNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jdouble, jint, jobject, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpCcsrlsvcholNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;FILjcuda/Pointer;[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsrlsvcholNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jfloat, jint, jobject, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpZcsrlsvcholNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;DILjcuda/Pointer;[I)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsrlsvcholNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jdouble, jint, jobject, jintArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpScsrlsqvqrHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IIILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;FLjcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsrlsqvqrHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jint, jobject, jobject, jobject, jobject, jobject, jfloat, jobject, jobject, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpDcsrlsqvqrHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IIILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;DLjcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsrlsqvqrHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jint, jobject, jobject, jobject, jobject, jobject, jdouble, jobject, jobject, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpCcsrlsqvqrHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IIILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;FLjcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsrlsqvqrHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jint, jobject, jobject, jobject, jobject, jobject, jfloat, jobject, jobject, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpZcsrlsqvqrHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IIILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;DLjcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsrlsqvqrHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jint, jobject, jobject, jobject, jobject, jobject, jdouble, jobject, jobject, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpScsreigvsiHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;FLjcuda/Pointer;IFLjcuda/Pointer;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsreigvsiHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jfloat, jobject, jint, jfloat, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpDcsreigvsiHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;DLjcuda/Pointer;IDLjcuda/Pointer;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsreigvsiHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jdouble, jobject, jint, jdouble, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpCcsreigvsiHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/cuComplex;Ljcuda/Pointer;IFLjcuda/Pointer;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsreigvsiHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jobject, jint, jfloat, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpZcsreigvsiHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/cuDoubleComplex;Ljcuda/Pointer;IDLjcuda/Pointer;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsreigvsiHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jobject, jint, jdouble, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpScsreigvsiNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;FLjcuda/Pointer;IFLjcuda/Pointer;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsreigvsiNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jfloat, jobject, jint, jfloat, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpDcsreigvsiNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;DLjcuda/Pointer;IDLjcuda/Pointer;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsreigvsiNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jdouble, jobject, jint, jdouble, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpCcsreigvsiNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/cuComplex;Ljcuda/Pointer;IFLjcuda/Pointer;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsreigvsiNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jobject, jint, jfloat, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpZcsreigvsiNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/cuDoubleComplex;Ljcuda/Pointer;IDLjcuda/Pointer;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsreigvsiNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jobject, jint, jdouble, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpScsreigsHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/cuComplex;Ljcuda/cuComplex;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsreigsHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpDcsreigsHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/cuDoubleComplex;Ljcuda/cuDoubleComplex;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsreigsHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpCcsreigsHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/cuComplex;Ljcuda/cuComplex;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsreigsHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpZcsreigsHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/cuDoubleComplex;Ljcuda/cuDoubleComplex;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsreigsHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpXcsrsymrcmHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpXcsrsymrcmHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpXcsrsymmdqHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpXcsrsymmdqHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpXcsrsymamdHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpXcsrsymamdHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpXcsrmetisndHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;[JLjcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpXcsrmetisndHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jlongArray, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpScsrzfdHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsrzfdHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpDcsrzfdHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsrzfdHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpCcsrzfdHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsrzfdHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpZcsrzfdHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsrzfdHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jobject, jobject, jobject, jobject, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpXcsrperm_bufferSizeHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IIILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;[J)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpXcsrperm_1bufferSizeHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jint, jobject, jobject, jobject, jobject, jobject, jlongArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpXcsrpermHostNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IIILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpXcsrpermHostNative
    (JNIEnv*, jclass, jobject, jint, jint, jint, jobject, jobject, jobject, jobject, jobject, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpCreateCsrqrInfoNative
     * Signature: (Ljcuda/jcusolver/csrqrInfo;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCreateCsrqrInfoNative
    (JNIEnv*, jclass, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpDestroyCsrqrInfoNative
     * Signature: (Ljcuda/jcusolver/csrqrInfo;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDestroyCsrqrInfoNative
    (JNIEnv*, jclass, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpXcsrqrAnalysisBatchedNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IIILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/jcusolver/csrqrInfo;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpXcsrqrAnalysisBatchedNative
    (JNIEnv*, jclass, jobject, jint, jint, jint, jobject, jobject, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpScsrqrBufferInfoBatchedNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IIILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;ILjcuda/jcusolver/csrqrInfo;[J[J)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsrqrBufferInfoBatchedNative
    (JNIEnv*, jclass, jobject, jint, jint, jint, jobject, jobject, jobject, jobject, jint, jobject, jlongArray, jlongArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpDcsrqrBufferInfoBatchedNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IIILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;ILjcuda/jcusolver/csrqrInfo;[J[J)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsrqrBufferInfoBatchedNative
    (JNIEnv*, jclass, jobject, jint, jint, jint, jobject, jobject, jobject, jobject, jint, jobject, jlongArray, jlongArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpCcsrqrBufferInfoBatchedNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IIILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;ILjcuda/jcusolver/csrqrInfo;[J[J)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsrqrBufferInfoBatchedNative
    (JNIEnv*, jclass, jobject, jint, jint, jint, jobject, jobject, jobject, jobject, jint, jobject, jlongArray, jlongArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpZcsrqrBufferInfoBatchedNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IIILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;ILjcuda/jcusolver/csrqrInfo;[J[J)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsrqrBufferInfoBatchedNative
    (JNIEnv*, jclass, jobject, jint, jint, jint, jobject, jobject, jobject, jobject, jint, jobject, jlongArray, jlongArray);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpScsrqrsvBatchedNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IIILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;ILjcuda/jcusolver/csrqrInfo;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsrqrsvBatchedNative
    (JNIEnv*, jclass, jobject, jint, jint, jint, jobject, jobject, jobject, jobject, jobject, jobject, jint, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpDcsrqrsvBatchedNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IIILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;ILjcuda/jcusolver/csrqrInfo;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsrqrsvBatchedNative
    (JNIEnv*, jclass, jobject, jint, jint, jint, jobject, jobject, jobject, jobject, jobject, jobject, jint, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpCcsrqrsvBatchedNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IIILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;ILjcuda/jcusolver/csrqrInfo;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsrqrsvBatchedNative
    (JNIEnv*, jclass, jobject, jint, jint, jint, jobject, jobject, jobject, jobject, jobject, jobject, jint, jobject, jobject);

    /*
     * Class:     jcuda_jcusolver_JCusolverSp
     * Method:    cusolverSpZcsrqrsvBatchedNative
     * Signature: (Ljcuda/jcusolver/cusolverSpHandle;IIILjcuda/jcusparse/cusparseMatDescr;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;ILjcuda/jcusolver/csrqrInfo;Ljcuda/Pointer;)I
     */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsrqrsvBatchedNative
    (JNIEnv*, jclass, jobject, jint, jint, jint, jobject, jobject, jobject, jobject, jobject, jobject, jint, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
