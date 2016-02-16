/*************************************************************************
  > File Name   : calPrime.c
  > Author      : zfx
  > Mail        : zfx050621@163.com
  > Created Time: 2016年02月14日 星期日 16时51分43秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"squareApproach.h"
#include"calPrime.h"

boolen calPrime( PrimeType e)
{
    if( e == 2 ){ return true;}
    int i;
    double s = squareApproach( (double)e );
    for( i = 2; i <= s ; i++ ){
        if( e % i == 0 ){
            return false;
            break;
        }
    }
    return true;
}
