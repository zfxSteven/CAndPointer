/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年02月26日 星期五 15时17分32秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"reverseBits.h"

int main()
{
    unsigned int inputV = 25;
    printf("before:%u\t",inputV);
    printf("after:%u\n", reverse_bits( inputV ));
    return EXIT_SUCCESS;
}
