/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年04月21日 星期四 13时52分44秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"my_strcpy.h"

int main()
{
    char str_src[10] = "Hello World!";
    char str_dst[20]; int len = strlen(str_src);
    printf("%s\n",my_strcpy(str_src,str_dst,len));
    return EXIT_SUCCESS;
}
