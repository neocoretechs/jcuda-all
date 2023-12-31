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
 /* Header for class jcuda_jcusolver_JCusolver */

#ifndef _Included_jcuda_jcusolver_JCusolver
#define _Included_jcuda_jcusolver_JCusolver
#ifdef __cplusplus
extern "C" {
#endif
    /*
    * Class:     jcuda_jcusolver_JCusolver
    * Method:    setLogLevelNative
    * Signature: (I)V
    */
    JNIEXPORT void JNICALL Java_jcuda_jcusolver_JCusolver_setLogLevelNative
        (JNIEnv *, jclass, jint);

    /*
    * Class:     jcuda_jcusolver_JCusolver
    * Method:    cusolverGetPropertyNative
    * Signature: (I[I)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolver_cusolverGetPropertyNative
        (JNIEnv *, jclass, jint, jintArray);

    /*
    * Class:     jcuda_jcusolver_JCusolver
    * Method:    cusolverGetVersionNative
    * Signature: ([I)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolver_cusolverGetVersionNative
        (JNIEnv *, jclass, jintArray);

#ifdef __cplusplus
}
#endif
#endif
