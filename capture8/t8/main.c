/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年04月19日 星期二 01时28分34秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"eight_queens.h"

int main()
{
    CH ch; 
    eight_queens( &ch.chessboard[0][0] );
    return EXIT_SUCCESS;
}
