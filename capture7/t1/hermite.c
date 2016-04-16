/*************************************************************************
  > File Name   : hermite.c
  > Author      : zfx
  > Created Time: 2016年04月10日 星期日 13时18分15秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"hermite.h"

/* Hermite Polynomials
 * n : iterative counter
 * x : input*/
int hermite( int n, int x)
{
    if( n <= 0){
        return 1;
    }   

    if( n == 1){
        return 2*x;
    }

    if( n >= 2){
        return 2 * x * hermite( n - 1, x) - 2 * ( n - 1 ) * hermite( n - 2, x);
    }
}
