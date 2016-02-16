/*************************************************************************
  > File Name   : p4.3.c
  > Author      : zfx
  > Mail        : zfx050621@163.com
  > Created Time: 2016年02月15日 星期一 10时03分26秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"triangle.h"

#define MAX_SIZE 100

int main()
{
    srand(time(NULL));

    double *a,*b,*c;
    double  a_tri , b_tri , c_tri;
    a = &a_tri;
    b = &b_tri;
    c = &c_tri;

    int i;
    for( i = 0 ; i <= MAX_SIZE ; i++){
        *a = rand() % 100 + 1;
        *b = rand() % 100 + 1;
        *c = rand() % 100 + 1;
        if( judgeTri( a , b , c ) == true ){
            printf("%f\t%f\t%f\t", *a , *b , *c );
            if( judgeIsoTri( a , b , c ) == true ){
                printf("Isosceles Triangle\t");
                if( judgeRegTri( a , b , c ) == true ){
                    printf("Regular Triangle\n"); 
                }
            }   
            printf("\n");
        }
    }

    return EXIT_SUCCESS;
}
