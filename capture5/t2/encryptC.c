/*************************************************************************
  > File Name   : encryptC.c
  > Author      : zfx
  > Created Time: 2016年02月24日 星期三 03时58分55秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"encryptC.h"

/* calculate encryption bias */
char calBias( char ch )
{
    char tmp = 0b00000000;
    //get the number that A or a as the first one
    tmp = ch & 0b00011111;//make a copy
    //printf("tmp1=%d\t",tmp);
    tmp = ( tmp + BIAS - 1 ) % 26 + 1;//calculate bias
    //printf("tmp2=%d\n",tmp);
    ch &= 0b11100000;//clear the value in the location x :0b000xxxxx
    return ch += tmp;
}

/* encrypt char   */
char encryptC( char ch)
{
    //shift char with shift_bit
    if( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
        //printf("\nafter calBias = %x\n", calBias(ch));
        return calBias( ch );
    }else {
        return ch;
    }
}

void printChar()
{
    char ch;
    printf("Input:");
    while( ( ch = getchar()) != EOF ){
        printf("%c",ch = encryptC( ch ));
        if( ch == '\n' ){
            printf("Input:");
        }
    }
}
