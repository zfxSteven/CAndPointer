/*************************************************************************
  > File Name   : eight_queens.h
  > Author      : zfx
  > Created Time: 2016年04月18日 星期一 17时48分10秒
 ************************************************************************/

#ifndef _EIGHT_QUEENS_H
#define _EIGHT_QUEENS_H

#define CHESSBOARD_LEN 8
#define EMPTY 0
#define QUEEN 1
#define OCCUPYED 2

//chessboard
typedef struct CH{
    int chessboard[CHESSBOARD_LEN][CHESSBOARD_LEN];
}CH;

int eight_queens( int * const chessboard);
void put_queen( int * const chessboard);
int initCB( int * const chessboard);
int printCB( int * const chessboard);

#endif
