/*************************************************************************
  > File Name   : p1.8.2.std.c
  > Author      : zfx
  > Mail        : zfx050621@163.com
  > Created Time: 2016年01月27日 星期三 10时04分21秒
 ************************************************************************/
/*
 *this standary answer for practice 1.8.2 
 *rewrite for practice 2.8.2
 * */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "p2.8.2.compare.h"

#define F_PATH "/root/tmp/p1.8.2.std.c"
int main()
{
    int ch;//cycling check the stdin
    int line;//line number
    int column;
    int at_beginning;//this is a flag to check where line begin
    
    FILE *stream=fopen(F_PATH,"r");

    line = 0;//initate the line number
    column = 0;//column number
    at_beginning = 1;

    //cycling get input chars and deal it
    while(( ch = fgetc(stream)) != EOF){
        //if it's the beginning of the line 
        //print line number
        if(at_beginning == 1){
            at_beginning = 0;
            line += 1;
            printf("%d:\t",line);
        }
        column++;

        //print the input char
        //and check if it's the end of line
        putchar( ch );
        if( ch == '\n'){
            at_beginning = 1;
            column=0;
        }

        //check the bracklet compare
        compare_bracklet( ch, line ,column);
    }

    //print the uncompared bracklets
    printUncompare();

    return EXIT_SUCCESS;
}

