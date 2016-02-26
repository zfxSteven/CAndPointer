/*************************************************************************
  > File Name   : t8.7.c
  > Author      : zfx
  > Created Time: 2016年02月22日 星期一 19时20分36秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a = 20;

    if( 2 <= a <= 0 ){
        printf("In range\n");
    }else{
        printf("Out of range\n");
    }

    return EXIT_SUCCESS;
}
