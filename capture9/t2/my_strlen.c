/*************************************************************************
  > File Name   : my_strlen.c
  > Author      : zfx
  > Created Time: 2016年04月21日 星期四 13时00分07秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"my_strlen.h"

/* get a string ptr & char matrix length
 * retrun string's actually length
 * my_size_t is unsigned int*/
my_size_t my_strlen( char const *string, int length)
{
    int i;
    for( i = 0; i < length; i++){
        if( *string++ == '\0'){
            break;
        }
    }
    return i;
}
