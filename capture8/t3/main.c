/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年04月17日 星期日 01时36分31秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include"identity_matrix.h"

#define LEN 4
#define LENM LEN*LEN

void initR( int input[LEN][LEN])
{
    int *ptr = &input[LEN][LEN];
    int i ;
    for( i = 0; i < LENM; i++){
        *ptr++ = rand() % 2;
    }
}

void printM( int input[LEN][LEN])
{
    int *ptr = &input[LEN][LEN];
    int i ;
    printf("matrix = {\n");
    for( i = 0; i < LENM; i++){
        printf("%d ",*ptr++);
        if( i % LEN == LEN - 1 ){
            printf("\n");
        }
    }
    printf("}\n");
}

void main()
{
    int a[LEN][LEN] /*=
    {
        { 1,0,0,0,0,0,0,0,0,0 },
        { 0,1,0,0,0,0,0,0,0,0 },
        { 0,0,1,0,0,0,0,0,0,0 },
        { 0,0,0,1,0,0,0,0,0,0 },
        { 0,0,0,0,1,0,0,0,0,0 },
        { 0,0,0,0,0,1,0,0,0,0 },
        { 0,0,0,0,0,0,1,0,0,0 },
        { 0,0,0,0,0,0,0,1,0,0 },
        { 0,0,0,0,0,0,0,0,1,0 },
        { 0,0,0,0,0,0,0,0,0,1 }
    }*/;
    initR(a);
    srand((unsigned)time(NULL));
    int counter = 0;
    while( identity_matrix(&a[LEN][LEN],LEN) != 1 && counter < 2e16+1){
        counter++;
 //       printM(a);
        initR(a);
    }
    printM(a);
    printf("counter = %d\n",counter);
    printf("%d\n",identity_matrix(&a[LEN][LEN],LEN));
}

