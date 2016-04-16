/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年03月12日 星期六 21时31分29秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"findchar.h"
#include"delsubstr.h"

int main()
{
    char input_string[20] = "Hello World!";
    char *input_substr = "ello";
    del_substr( input_string, input_substr);
    return EXIT_SUCCESS;
}
