/*************************************************************************
  > File Name   : substr.c
  > Author      : zfx
  > Created Time: 2016年02月16日 星期二 22时02分24秒
 ************************************************************************/
#include<stdio.h>
#include<string.h>

#include"substr.h"

#define ERROR_INPUT 0

int substr( char dst[], char src[], int start, int len )
{
    //check input
    if( strlen( src ) <= 0 || start >= strlen( src ) || len <= 0 ){
       return ERROR_INPUT;
    }
    int ptr, dst_len;
    for( ptr = start - 1, dst_len = 0; src[ ptr ] != '\0'; ptr++, dst_len++){
        dst[ dst_len ] = src[ ptr ];
    }
    dst[ ++dst_len ] = '\0';
    return --dst_len ;

}
