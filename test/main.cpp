/*
 * Copyright 2010-2017 Branimir Karadzic. All rights reserved.
 * License: https://github.com/bkaradzic/bx#license-bsd-2-clause
 */

#include <string.h>
#include <bx/bx.h>

BX_STATIC_ASSERT( 1 == BX_VA_ARGS_COUNT( 1 ) );
BX_STATIC_ASSERT( 2 == BX_VA_ARGS_COUNT( 1, 2 ) );
BX_STATIC_ASSERT( 3 == BX_VA_ARGS_COUNT( 1, 2, 3 ) );
BX_STATIC_ASSERT( 4 == BX_VA_ARGS_COUNT( 1, 2, 3, 4 ) );
BX_STATIC_ASSERT( 5 == BX_VA_ARGS_COUNT( 1, 2, 3, 4, 5 ) );
BX_STATIC_ASSERT( 6 == BX_VA_ARGS_COUNT( 1, 2, 3, 4, 5, 6 ) );

BX_STATIC_ASSERT( 0 == BX_ALIGN_16( 0 ) );
BX_STATIC_ASSERT( 16 == BX_ALIGN_16( 1 ) );
BX_STATIC_ASSERT( 16 == BX_ALIGN_16( 15 ) );
BX_STATIC_ASSERT( 16 == BX_ALIGN_16( 16 ) );
BX_STATIC_ASSERT( 256 == BX_ALIGN_16( 255 ) );

BX_STATIC_ASSERT( 0 == BX_ALIGN_256( 0 ) );
BX_STATIC_ASSERT( 256 == BX_ALIGN_256( 1 ) );
BX_STATIC_ASSERT( 256 == BX_ALIGN_256( 15 ) );
BX_STATIC_ASSERT( 256 == BX_ALIGN_256( 255 ) );
BX_STATIC_ASSERT( 256 == BX_ALIGN_256( 256 ) );
BX_STATIC_ASSERT( 256 == BX_ALIGN_256( 256 ) );
BX_STATIC_ASSERT( 512 == BX_ALIGN_256( 511 ) );

int main( int arv, const char **argv )
{
    return 0;
}