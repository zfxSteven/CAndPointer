/*************************************************************************
  > File Name   : gcd.c
  > Author      : zfx
  > Created Time: 2016年04月10日 星期日 13时45分37秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"gcd.h"

/* calculate Greatest Common Divisor 
 * between M , N*/
int gcd( int M, int N)
{
    //input check
    if( M <= 0 || N <= 0 ){
        printf("input ERROR!\n");
        return ERROR;
    }
    
    int R;
    //calculate
    if( ( R = M % N ) == 0 ){ 
        return N;
    }else if( R > 0 ){
        return gcd( N , R );
    }
}
