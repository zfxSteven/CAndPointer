/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年04月20日 星期三 03时10分10秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"char_classify.h"

int main()
{
    char str_input[1000];
    char ch, *ptr = &str_input[0];
    printf("input:");
    while(( ch = getchar() ) != '\n'){
        *ptr++ = ch;
    }
    *ptr = '\0';
    char_classify_statisic( str_input);
    return EXIT_SUCCESS;
}
