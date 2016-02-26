/*************************************************************************
  > File Name   : reverseBits.c
  > Author      : zfx
  > Created Time: 2016年02月26日 星期五 14时55分53秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"reverseBits.h"
/* return a mirror reverse of value in binary */
unsigned int reverse_bits( unsigned int value )
{
    unsigned int tmp;
    short int ptr;
    for( ptr = 1 ,tmp = 0; value != 0 ; ptr++, value >>= 1){
        if( value % 2 != 0){
            tmp |= 1 << ( BIT_LEN - ptr );
        }
    }
    return tmp;
}
