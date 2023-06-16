/*
 * JCudnn - Java bindings for cuDNN, the NVIDIA CUDA
 * Deep Neural Network library, to be used with JCuda
 *
 * Copyright (c) 2015-2018 Marco Hutter - http://www.jcuda.org
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
package jcuda.jcudnn;

public class cudnnRNNDataLayout
{
    /**
     * padded, outer stride from one time-step to the next 
     */
    public static final int CUDNN_RNN_DATA_LAYOUT_SEQ_MAJOR_UNPACKED = 0;
    /**
     * sequence length sorted and packed as in basic RNN api 
     */
    public static final int CUDNN_RNN_DATA_LAYOUT_SEQ_MAJOR_PACKED = 1;
    /**
     * padded, outer stride from one batch to the next 
     */
    public static final int CUDNN_RNN_DATA_LAYOUT_BATCH_MAJOR_UNPACKED = 2;

    /**
     * Private constructor to prevent instantiation
     */
    private cudnnRNNDataLayout()
    {
        // Private constructor to prevent instantiation
    }

    /**
     * Returns a string representation of the given constant
     *
     * @return A string representation of the given constant
     */
    public static String stringFor(int n)
    {
        switch (n)
        {
            case CUDNN_RNN_DATA_LAYOUT_SEQ_MAJOR_UNPACKED: return "CUDNN_RNN_DATA_LAYOUT_SEQ_MAJOR_UNPACKED";
            case CUDNN_RNN_DATA_LAYOUT_SEQ_MAJOR_PACKED: return "CUDNN_RNN_DATA_LAYOUT_SEQ_MAJOR_PACKED";
            case CUDNN_RNN_DATA_LAYOUT_BATCH_MAJOR_UNPACKED: return "CUDNN_RNN_DATA_LAYOUT_BATCH_MAJOR_UNPACKED";
        }
        return "INVALID cudnnRNNDataLayout: "+n;
    }
}

