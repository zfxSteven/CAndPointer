/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年04月10日 星期日 13时29分04秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"hermite.h"

int main()
{
    int n_input = 3;
    int x_input = 2;
    printf("hermite(%d)[%d] = %d\n", n_input,x_input, hermite( n_input, x_input ));
    return EXIT_SUCCESS;
}
