/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年04月17日 星期日 12时57分20秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"matrix_multiply.h"

#define X 3
#define Y 2
#define Z 4

void pMatrix( int *m, int x, int y);

int main()
{
    int a[X][Y] = {
        2,-6,
        3,5,
        1,-1
    };
    int b[Y][Z] = {
        4,-2,-4,-5,
        -7,-3,6,7
    };
    int c[X][Z];
    matrix_multiply( &a[0][0], &b[0][0], &c[0][0],X,Y,Z);
    pMatrix(&c[0][0],X,Z);
    return EXIT_SUCCESS;
}

void pMatrix( int *m, int x, int y)
{
    int i,j;
    printf("Maritx[%d,%d] = {\n",x,y);
    for( i = 0; i < x; i++){
        for( j = 0; j < y; j++){
            printf("%d ",*(m + i * y + j));
        }
        printf("\n");
    }
    printf("}\n");
}
