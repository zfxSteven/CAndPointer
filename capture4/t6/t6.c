/*************************************************************************
  > File Name   : t6.c
  > Author      : zfx
  > Created Time: 2016年02月16日 星期二 22时57分36秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"substr.h"
#define MAXSIZE 20

int main()
{
    char *sub = "Hello World!";
    char *str = ( char *)malloc( MAXSIZE * sizeof( char));
    int start = 14;
    int len = 10;
    printf("Init: %s\n",sub);
    printf("str_length:%d start:%d len:%d str:%s\n",substr( str, sub, start , len) , start , len , str);
    return EXIT_SUCCESS;
}
