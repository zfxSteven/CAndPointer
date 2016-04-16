/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年04月10日 星期日 16时15分35秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include"max_list.h"

#define LIST_LEN 20
ElemType list[LIST_LEN];
int initList( ElemType *ptr);


int main()
{
    //init list
    if( initList( list ) == EXIT_SUCCESS ){
        printf("max = %d\n", max_list( list ));
    }
    return EXIT_SUCCESS;
}

int initList( ElemType *ptr)
{
    srand( (unsigned)time(NULL));
    int i;
    ElemType *begin = ptr;
    for( i = 0; i < (LIST_LEN - 1); i++ ){
        *ptr++ = rand() % 100;
    }
    *ptr = -1;
    for( ptr = begin, i = 0 ; i < LIST_LEN; i++ ){
        printf("%d ", *ptr++ );
    }
    printf("\n");
    return EXIT_SUCCESS;
}
