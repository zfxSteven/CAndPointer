/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年03月12日 星期六 14时12分28秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"findchar.h"

int main()
{
    char input_s[20] = "adaassaaaa";
    char *input_source = input_s;
    char *input_chars_0 = "dddd";
    char *input_chars_1 = "aa";
    char *ptr;

    find_char( input_source, input_chars_0 )? ( printf("%s is included\n",find_char( input_source, input_chars_0 ))):( printf("Not Find!\n"));
    find_char( input_source, input_chars_1 )? ( printf("%s is included\n",find_char( input_source, input_chars_1 ))):( printf("Not Find!\n"));
    return EXIT_SUCCESS;
}
