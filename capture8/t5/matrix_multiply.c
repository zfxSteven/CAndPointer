/*************************************************************************
  > File Name   : matrix_multiply.c
  > Author      : zfx
  > Created Time: 2016年04月17日 星期日 12时43分44秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"matrix_multiply.h"

//matrix multiply
//[x,y]*[y,z] = [x,z]
void matrix_multiply( int *m1, int *m2, int *r,int x, int y, int z)
{
    int i,j,k;
    int tmp = 0;
    for( i = 0; i < x; i++){//line
        for( j = 0; j < z; j++){//column
            tmp = 0;
            for( k = 0; k < y; k++){//m1[x,k]*m2[k,z]
                tmp += *(m1 + i * y + k) * *( m2 + k * z + j);
            }
            *(r + i * z + j) = tmp;//[i,j]
        }
    }
}
