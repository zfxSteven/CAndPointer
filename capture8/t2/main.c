/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年04月16日 星期六 23时40分55秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"single_tax.h"

int main()
{
    float test = 0;
    while( test >= 0.0 ){
        printf("Income:");
        scanf("%f", &test);
        printf("income = %.2f, tax = %.2f\n",test, single_tax( test ));

    }
    return EXIT_SUCCESS;
}
