/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年04月10日 星期日 14时37分48秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"ascii_to_integer.h"


int main()
{
    char input_string[]="123";
    printf("%d\n", ascii_to_integer( input_string ));
    return EXIT_SUCCESS;
}
