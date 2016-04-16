/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年03月13日 星期日 18时29分58秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"Eratosthenes.h"

int main()
{
    if( Eratosthenes() == true ){
        printEratosthenes();
    }
    return EXIT_SUCCESS;
}
