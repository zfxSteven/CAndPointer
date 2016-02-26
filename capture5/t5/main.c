/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年02月27日 星期六 01时13分53秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"storeBitField.h"

int main()
{
    ElemType a = 0x000000FF;
    ElemType b = 0x0FF00000;
    unsigned int start = 8;
    unsigned int end = 15;
    printf("%x\n%x\n%x\n",b,a,store_bit_field( b, a, start, end));
    return EXIT_SUCCESS;
}
