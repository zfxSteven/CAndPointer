/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年04月10日 星期日 17时24分56秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"print_zfx.h"

int main()
{
    char *string = "Hello World!";
    //print_zfx("This is my first program of printf!\nIt can print integer:%d,float:%f & string:%s or char:%c\n",5,4.2,string,*string);
    print_zfx("%c\n",*string);
    return EXIT_SUCCESS;
}
