/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年02月18日 星期四 22时08分32秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

int fun( void )
{
    static int counter = 1;
    return ++counter;
}

int main()
{
    int answer;
    answer = fun() - fun() * fun();
    printf("%d\n", answer );
    return EXIT_SUCCESS;
}
