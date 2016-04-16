/*************************************************************************
  > File Name   : ascii_to_integer.c
  > Author      : zfx
  > Created Time: 2016年04月10日 星期日 14时37分21秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"ascii_to_integer.h"

int ascii_to_integer( char *string )
{
    /*tips: integer 0~9
     *      ascii   48~57      */
    int integer = 0;
    while( *string != '\0'){
        integer *= 10;
        integer += ( *string++ ) % 48;// pointer auto-increase
    }
    return integer;
}
