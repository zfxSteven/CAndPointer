/*************************************************************************
  > File Name   : identity_matrix.c
  > Author      : zfx
  > Created Time: 2016年04月17日 星期日 01时15分36秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"identity_matrix.h"

/* get a 10x10 matrix 
 * and jugde if it's a identity matrix or not 
 * return a boolen value*/
boolen identity_matrix( int *input, int len)
{
    int i,j;
    //matrix diagnoal = 1
    for( i = 0; i < len; i++){
        if( *(input + len * i + i) != 1 ){
            return false;
            break;
        }
    }
    //other elements are all zero
    for( i = 0; i < len; i++){
        for( j = i+1; j < len; j++ ){
            if( *(input + i * len + j) != 0 || *(input + j * len + i) != 0 ){
                return false;
                break;
            }
        }
    }
    //all element competible
    return true;
}
