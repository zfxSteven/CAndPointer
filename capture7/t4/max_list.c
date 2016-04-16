/*************************************************************************
  > File Name   : max_list.c
  > Author      : zfx
  > Created Time: 2016年04月10日 星期日 16时05分41秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"max_list.h"

ElemType max_list( ElemType *ptr)
{
    ElemType *max; max = ptr;
    while( *ptr++ >= 0 ){
        if( *ptr > *max ){
            max = ptr;
        }
    }//end-while
    
    printf(" max ~ %d ", *max);
    return *max;

}
