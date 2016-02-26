/*************************************************************************
  > File Name   : tranC.c
  > Author      : zfx
  > Created Time: 2016年02月24日 星期三 03时58分55秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"tranC.h"

/* transform capitals character to lower-case  */
char tranC( char ch)
{
    //lower-case  start with "0110"
    //capital start with "0100"
    //use | transform capital to lower-case ->
    //0|0 ->0 else ->1 
    if( ch >= 'A' && ch <= 'Z'){
        printf("\nIn range\n");
        return ( ch |= 0b00100000 ) ;
        //return ch += 32;
        //return ch |= 32;
        //return ch |= 0b1 << bit_number;( retrun value error ! )
    }else {
        return ch;
    }
}

void printChar()
{
    char ch;
    printf("Input:");
    while( ( ch = getchar()) != EOF ){
        printf("%c",tranC( ch ));
        if( ch == '\n' ){
            printf("Input:");
        }
    }
}
