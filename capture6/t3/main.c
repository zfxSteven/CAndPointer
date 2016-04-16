/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年03月13日 星期日 03时25分34秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"reverseString.h"

int main()
{
    char input[20] = "Hello World!";
    char *str = input;
    reverse_string( str );
    return EXIT_SUCCESS;
}
