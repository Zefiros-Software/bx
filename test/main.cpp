/**
 * @cond ___LICENSE___
 *
 * Copyright (c) 2016-2018 Zefiros Software.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * @endcond
 */

#include <string.h>
#include <bx/bx.h>

BX_STATIC_ASSERT(1 == BX_VA_ARGS_COUNT(1));
BX_STATIC_ASSERT(2 == BX_VA_ARGS_COUNT(1, 2));
BX_STATIC_ASSERT(3 == BX_VA_ARGS_COUNT(1, 2, 3));
BX_STATIC_ASSERT(4 == BX_VA_ARGS_COUNT(1, 2, 3, 4));
BX_STATIC_ASSERT(5 == BX_VA_ARGS_COUNT(1, 2, 3, 4, 5));
BX_STATIC_ASSERT(6 == BX_VA_ARGS_COUNT(1, 2, 3, 4, 5, 6));

BX_STATIC_ASSERT(0 == BX_ALIGN_16(0));
BX_STATIC_ASSERT(16 == BX_ALIGN_16(1));
BX_STATIC_ASSERT(16 == BX_ALIGN_16(15));
BX_STATIC_ASSERT(16 == BX_ALIGN_16(16));
BX_STATIC_ASSERT(256 == BX_ALIGN_16(255));

BX_STATIC_ASSERT(0 == BX_ALIGN_256(0));
BX_STATIC_ASSERT(256 == BX_ALIGN_256(1));
BX_STATIC_ASSERT(256 == BX_ALIGN_256(15));
BX_STATIC_ASSERT(256 == BX_ALIGN_256(255));
BX_STATIC_ASSERT(256 == BX_ALIGN_256(256));
BX_STATIC_ASSERT(256 == BX_ALIGN_256(256));
BX_STATIC_ASSERT(512 == BX_ALIGN_256(511));

int main(int arv, const char **argv)
{
    return 0;
}