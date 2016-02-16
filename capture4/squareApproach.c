/*************************************************************************
  > File Name   : p4.1.c
  > Author      : zfx
  > Mail        : zfx050621@163.com
  > Created Time: 2016年02月14日 星期日 15时10分12秒
 ************************************************************************/
#include<stdio.h>

#include"squareApproach.h"

//Approach to the squre root of n
SquareType a_App( SquareType e , SquareType n )
{
    return ( e + n / e) * 0.5;
}

SquareType squareApproach( SquareType n)
{   
    SquareType tmp , a ;
    for( tmp = 0.0 , a = 1.0 ; tmp != ( a = a_App( a , n )) ; tmp = a){
        //fprintf(stdout," a = %.10f\n", a );
    }

    return a ;
}
