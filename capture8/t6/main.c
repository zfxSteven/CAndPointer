/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年04月18日 星期一 01时21分36秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"array_offset.h"

int main()
{
    int a_info[] = { 3,4,6,1,5,-3,3 };
    printf("%d\n",array_offset(a_info,4,1,3));
    return EXIT_SUCCESS;
}
