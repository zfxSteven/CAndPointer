/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年04月10日 星期日 13时57分48秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"gcd.h"

int main()
{
    int M_input = 20;
    int N_input = 16;
    printf("gcd(%d,%d) = %d\n", M_input, N_input, gcd( M_input, N_input));
    return EXIT_SUCCESS;
}
