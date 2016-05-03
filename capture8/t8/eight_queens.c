/*************************************************************************
  > File Name   : eight_queens.c
  > Author      : zfx
  > Created Time: 2016年04月19日 星期二 00时47分25秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#include"eight_queens.h"




int eight_queens( int * const chessboard)
{
    initCB( chessboard );
    put_queen( chessboard );
}

void put_queen( int * const chessboard){
    int i, j, k;int flag = 0;
    int *ptr = chessboard;
    for( i = 0; i < CHESSBOARD_LEN ; i++){
        for( j = 0; j < CHESSBOARD_LEN; j++){
            if( *(ptr + i*CHESSBOARD_LEN + j) == EMPTY){
                flag = 1;//break flag
                for( k = 0 ; k < CHESSBOARD_LEN; k++){
                    *(ptr+j+k*CHESSBOARD_LEN) = OCCUPYED;//line
                    *(ptr+i*CHESSBOARD_LEN+k) = OCCUPYED;//column
                    //two diagonal line
                    *(ptr+(int)fabs((i-k)%CHESSBOARD_LEN*CHESSBOARD_LEN+(j+k)%CHESSBOARD_LEN)) = OCCUPYED;
                    *(ptr+(int)fabs((i+k)%CHESSBOARD_LEN*CHESSBOARD_LEN+(j+k)%CHESSBOARD_LEN)) = OCCUPYED;
                }
                *(ptr + (i - 1)*CHESSBOARD_LEN + j) = QUEEN;
                put_queen( chessboard );
                break;
            }
        }
        if( flag == 1 ){
            break;
        }
    }//all-for
    if( flag == 0){
        printCB( chessboard );
    }
}
int initCB( int * const chessboard){
    int i;
    int *ptr = chessboard;
    for( i = 0; i < CHESSBOARD_LEN * CHESSBOARD_LEN; i++){
        *ptr++ = 0;    
    }
    return EXIT_SUCCESS;
}

int printCB( int * const chessboard){
    int i,j;
    int *ptr = chessboard;
    printf("\n");
    for( i = 0; i < CHESSBOARD_LEN ; i++){
        for( j = 0; j < CHESSBOARD_LEN; j++){
            printf("%d ",*(ptr + (i - 1)*CHESSBOARD_LEN + j));
            /*
            if( *(ptr + (i - 1)*CHESSBOARD_LEN + j) == QUEEN){
                printf("1 ");
            }else{
                printf("0 ");
            }*/
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}

int put( int *chessboard, int i, int j){
    int k;int *ptr = chessboard;
    *(ptr + (i - 1)*CHESSBOARD_LEN + j) = QUEEN;
    for( k = 0 ; k < CHESSBOARD_LEN; k++){
        *(ptr+j+k*CHESSBOARD_LEN) = OCCUPYED;//line
        *(ptr+(i-1)*CHESSBOARD_LEN+k) = OCCUPYED;//column
        //two diagonal line
        *(ptr+(i-k)%CHESSBOARD_LEN*CHESSBOARD_LEN+(j+k)%CHESSBOARD_LEN) = OCCUPYED;
        *(ptr+(i+k)%CHESSBOARD_LEN*CHESSBOARD_LEN+(j-k)%CHESSBOARD_LEN) = OCCUPYED;
        }
   return EXIT_SUCCESS; 
}

int check( int *chessboard, int i, int j)
{
    int *ptr = chessboard;
    if( *(ptr + i*CHESSBOARD_LEN + j) == EMPTY){
        return EXIT_SUCCESS;
    }else{
        return EXIT_FAILURE;
    }
}
