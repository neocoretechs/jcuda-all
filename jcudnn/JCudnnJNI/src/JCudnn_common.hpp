/*
 * JCudnn - Java bindings for cuDNN, the NVIDIA CUDA
 * Deep Neural Network library, to be used with JCuda
 *
 * Copyright (c) 2015-2015 Marco Hutter - http://www.jcuda.org
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

#ifndef JCUDNN_COMMON
#define JCUDNN_COMMON

#define JCUDNN_STATUS_INTERNAL_ERROR (-1)

#include <stdlib.h>
#include <jni.h>
#include <../../../cudnn/include/cudnn.h>
#include <cuda_runtime.h>

#include "Logger.hpp"
#include "JNIUtils.hpp"
#include "PointerUtils.hpp"

 // The JVM, used for attaching threads in callbacks, and initialized
 // in JNI_OnLoad
JavaVM *globalJvm;

#endif