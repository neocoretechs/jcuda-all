/*
* JCurand - Java bindings for CURAND, the NVIDIA CUDA random
* number generation library, to be used with JCuda
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
/* Header for class jcuda_jcurand_JCurand */

#ifndef _Included_jcuda_jcurand_JCurand
#define _Included_jcuda_jcurand_JCurand
#ifdef __cplusplus
extern "C" {
#endif
    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    setLogLevelNative
    * Signature: (I)V
    */
    JNIEXPORT void JNICALL Java_jcuda_jcurand_JCurand_setLogLevelNative
        (JNIEnv *, jclass, jint);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandCreateGeneratorNative
    * Signature: (Ljcuda/jcurand/curandGenerator;I)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandCreateGeneratorNative
        (JNIEnv *, jclass, jobject, jint);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandCreateGeneratorHostNative
    * Signature: (Ljcuda/jcurand/curandGenerator;I)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandCreateGeneratorHostNative
        (JNIEnv *, jclass, jobject, jint);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandDestroyGeneratorNative
    * Signature: (Ljcuda/jcurand/curandGenerator;)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandDestroyGeneratorNative
        (JNIEnv *, jclass, jobject);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandGetVersionNative
    * Signature: ([I)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandGetVersionNative
        (JNIEnv *, jclass, jintArray);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandGetPropertyNative
    * Signature: (I[I)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandGetPropertyNative
        (JNIEnv *, jclass, jint, jintArray);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandSetStreamNative
    * Signature: (Ljcuda/jcurand/curandGenerator;Ljcuda/runtime/cudaStream_t;)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandSetStreamNative
        (JNIEnv *, jclass, jobject, jobject);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandSetPseudoRandomGeneratorSeedNative
    * Signature: (Ljcuda/jcurand/curandGenerator;J)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandSetPseudoRandomGeneratorSeedNative
        (JNIEnv *, jclass, jobject, jlong);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandSetGeneratorOffsetNative
    * Signature: (Ljcuda/jcurand/curandGenerator;J)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandSetGeneratorOffsetNative
        (JNIEnv *, jclass, jobject, jlong);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandSetGeneratorOrderingNative
    * Signature: (Ljcuda/jcurand/curandGenerator;I)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandSetGeneratorOrderingNative
        (JNIEnv *, jclass, jobject, jint);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandSetQuasiRandomGeneratorDimensionsNative
    * Signature: (Ljcuda/jcurand/curandGenerator;I)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandSetQuasiRandomGeneratorDimensionsNative
        (JNIEnv *, jclass, jobject, jint);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandGenerateNative
    * Signature: (Ljcuda/jcurand/curandGenerator;Ljcuda/Pointer;J)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandGenerateNative
        (JNIEnv *, jclass, jobject, jobject, jlong);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandGenerateLongLongNative
    * Signature: (Ljcuda/jcurand/curandGenerator;Ljcuda/Pointer;J)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandGenerateLongLongNative
        (JNIEnv *, jclass, jobject, jobject, jlong);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandGenerateUniformNative
    * Signature: (Ljcuda/jcurand/curandGenerator;Ljcuda/Pointer;J)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandGenerateUniformNative
        (JNIEnv *, jclass, jobject, jobject, jlong);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandGenerateUniformDoubleNative
    * Signature: (Ljcuda/jcurand/curandGenerator;Ljcuda/Pointer;J)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandGenerateUniformDoubleNative
        (JNIEnv *, jclass, jobject, jobject, jlong);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandGenerateNormalNative
    * Signature: (Ljcuda/jcurand/curandGenerator;Ljcuda/Pointer;JFF)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandGenerateNormalNative
        (JNIEnv *, jclass, jobject, jobject, jlong, jfloat, jfloat);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandGenerateNormalDoubleNative
    * Signature: (Ljcuda/jcurand/curandGenerator;Ljcuda/Pointer;JDD)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandGenerateNormalDoubleNative
        (JNIEnv *, jclass, jobject, jobject, jlong, jdouble, jdouble);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandGenerateLogNormalNative
    * Signature: (Ljcuda/jcurand/curandGenerator;Ljcuda/Pointer;JFF)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandGenerateLogNormalNative
        (JNIEnv *, jclass, jobject, jobject, jlong, jfloat, jfloat);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandGenerateLogNormalDoubleNative
    * Signature: (Ljcuda/jcurand/curandGenerator;Ljcuda/Pointer;JDD)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandGenerateLogNormalDoubleNative
        (JNIEnv *, jclass, jobject, jobject, jlong, jdouble, jdouble);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandCreatePoissonDistributionNative
    * Signature: (DLjcuda/jcurand/curandDiscreteDistribution;)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandCreatePoissonDistributionNative
        (JNIEnv *, jclass, jdouble, jobject);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandDestroyDistributionNative
    * Signature: (Ljcuda/jcurand/curandDiscreteDistribution;)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandDestroyDistributionNative
        (JNIEnv *, jclass, jobject);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandGeneratePoissonNative
    * Signature: (Ljcuda/jcurand/curandGenerator;Ljcuda/Pointer;JD)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandGeneratePoissonNative
        (JNIEnv *, jclass, jobject, jobject, jlong, jdouble);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandGenerateSeedsNative
    * Signature: (Ljcuda/jcurand/curandGenerator;)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandGenerateSeedsNative
        (JNIEnv *, jclass, jobject);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandGetDirectionVectors32Native
    * Signature: ([[[II)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandGetDirectionVectors32Native
        (JNIEnv *, jclass, jobjectArray, jint);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandGetScrambleConstants32Native
    * Signature: ([[I)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandGetScrambleConstants32Native
        (JNIEnv *, jclass, jobjectArray);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandGetDirectionVectors64Native
    * Signature: ([[[JI)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandGetDirectionVectors64Native
        (JNIEnv *, jclass, jobjectArray, jint);

    /*
    * Class:     jcuda_jcurand_JCurand
    * Method:    curandGetScrambleConstants64Native
    * Signature: ([[J)I
    */
    JNIEXPORT jint JNICALL Java_jcuda_jcurand_JCurand_curandGetScrambleConstants64Native
        (JNIEnv *, jclass, jobjectArray);

#ifdef __cplusplus
}
#endif
#endif
