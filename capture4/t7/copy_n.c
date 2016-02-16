/*************************************************************************
  > File Name   : copy_n.c
  > Author      : zfx
  > Created Time: 2016年02月15日 星期一 15时22分36秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"copy_n.h"

//copy n chars from dst to src
void copy_n( char dst[], char src[], int n )
{
    int i;
    //copy exist char
    for( i = 0; src[i] != '\0' && i < n; i++ ){
        dst[i] = src[i];
    }

    //add '\0' to the end
    if( i < n ){
        i++;
        while( i <= n ){
            dst[i++] = '\0'; 
        }
    }else{
        dst[++i] = '\0';
    }
}



