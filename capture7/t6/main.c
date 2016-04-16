/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年04月12日 星期二 12时38分09秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"written_amount.h"
#include"buffer_manager.h"

int main()
{
    unsigned int input = 100;
    top_buffer = buffer;
    written_amount( input , top_buffer);
    return EXIT_SUCCESS;
}
