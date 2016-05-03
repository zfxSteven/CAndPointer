/*************************************************************************
  > File Name   : my_strcpy.c
  > Author      : zfx
  > Created Time: 2016年04月21日 星期四 13时38分42秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"my_strcpy.h"

char *my_strcpy( char *src, char *dst, int dst_len)
{
    int i;char *ptr = dst;
    for( i = 0; i < dst_len - 1 ; i++){
        *dst++ = *src++;
    }
    *dst = '\0';
    return ptr;
}
