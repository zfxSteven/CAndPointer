/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年04月21日 星期四 13时09分18秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"my_strlen.h"

int main()
{
    char str[5] = "Hello";// len = 12
    printf("len = %d\n",my_strlen( str ,5));
    return EXIT_SUCCESS;
}
