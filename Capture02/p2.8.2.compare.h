/*************************************************************************
  > File Name   : p2.8.2.std.compare.h
  > Author      : zfx
  > Mail        : zfx050621@163.com
  > Created Time: 2016年01月28日 星期四 07时39分27秒
 ************************************************************************/
#ifndef _p2.8.2.std.compare_H_
#define _p2.8.2.std.compare_H_

#include<stdio.h>

#define LEN_COMPARE 100
#define INFO_COMPARE 3  // 0-bracklet type ; 1-bracklet line ; 2-bracklet column

#define FAILURE -1
#define SUCCESS 1

//stack for bracklet compare
int compare[LEN_COMPARE][INFO_COMPARE];//stack
int top_compare = -1 ;

//oparation of the stack
//if meet  '(' ,'{','[',push into stack
int push( int brackletType , int line , int column )
{   
    //check stack room is available
    if(top_compare + 1 >= LEN_COMPARE ){
        printf("\nBracklet compare stack will overflow!\n");
        return FAILURE;
    }
    //push the
    top_compare  += 1;
    compare[top_compare ][0] = brackletType;
    compare[top_compare ][1] = line;
    compare[top_compare ][2] = column;
    return SUCCESS;
}

//if meet ')','}',']'
//pop the compare one or repert the error
int pop( int brackletType )
{
    //check stack room is available
    if( (top_compare  + 1) == 0 ){
        printf("\nDon't have correct bracklet for compare!\nPlease check you C source code!\n");
        return FAILURE;
    }else if( brackletCompare(brackletType , top_compare  ) < 0 ){
        printf("\nError at bracklet using !\n");
    }
    //pop 
    top_compare  -= 1;

    return SUCCESS;
}

//for checking bracklet compare
int brackletCompare( int brackletType , int ptr )
{
    if( brackletType == 41 && compare[ptr][0] == 40 ){
        return SUCCESS;
    }else if( brackletType == 93 && compare[ptr][0] == 91 ){
        return SUCCESS;
    }else if( brackletType == 125 && compare[ptr][0] == 123 ){
        return SUCCESS;
    }else{
    //not compared
    return FAILURE;
    }
}

//compare
void compare_bracklet(  int ch, int line, int column)
{
    //push the bracklet   
    if( ch == 40 ){
       push( ch , line , column );
    }
    if( ch  == 91 ){
        push( ch , line , column );
    }
    if( ch == 123 ){
        push( ch , line , column );
    }

    //pop the bracklet
    if( ch == 41 ){
        pop( ch );
    }
    if( ch  == 93 ){
        pop( ch );
    }
    if( ch == 125 ){
        pop( ch );
    }
}

//print the uncompare bracklets
int printUncompare()
{
    int i;
    if( (top_compare  + 1) == 0 ){
        printf("\nAll bracklets are correctly compared!\n");
    }else{
        printf("\nThere are some bracklets missing its' compared one:\n");
        printf("bracklet\tline\tcolume\n");
        for( i=0; i <= top_compare; i++ ){
            printf("%c\t%d\t%d\n",compare[i][0],compare[i][1],compare[i][2]);
        }
    }

    return SUCCESS;
}
#endif
