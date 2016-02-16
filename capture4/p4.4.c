/*************************************************************************
  > File Name   : p4.4.c
  > Author      : zfx
  > Created Time: 2016年02月15日 星期一 15时57分13秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"copy_n.h"
#define MAXSIZE 20
int main()
{
    char *d = "Hello World!";
    char *s, s_string[ MAXSIZE ];
    s = s_string;
    
    printf("%s\n", d );
    copy_n( d , s , 5 );
    printf("%s\n", s );
    copy_n( d , s , 10 );
    printf("%s\n", s );
    copy_n( d , s , 15 );
    printf("%s\n", s );

    return EXIT_SUCCESS;
}
