/*************************************************************************
  > File Name   : t7.c
  > Author      : zfx
  > Created Time: 2016年02月16日 星期二 23时59分13秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 100

int main()
{
    //char *str = ( char *)malloc( MAXSIZE * sizeof( char ));
    char str[MAXSIZE]="Hello   world";
    printf("size:%d\n",sizeof( *str ) );
    printf("before:%s\n", str );
    deblank( str );
    printf("after:%s\n", str );
    return EXIT_SUCCESS;
}
