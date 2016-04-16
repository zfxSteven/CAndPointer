/*************************************************************************
  > File Name   : reverseString.c
  > Author      : zfx
  > Created Time: 2016年03月13日 星期日 03时25分08秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"reverseString.h"

void reverse_string( char *string)
{
    char *head, *tail;
    printf("%s\n\n",head = string);
    //get tail
    for( head = string; *head++ != '\0';);
    tail = head - 2;//point to the last char of string

    //exchange by binary operatin
    for( head = string; head < tail; head++, tail--){
        *head ^= *tail;
        *tail ^= *head;
        *head ^= *tail;
        printf("%s\n", string );
    }
    printf("%s\n", string );
}
