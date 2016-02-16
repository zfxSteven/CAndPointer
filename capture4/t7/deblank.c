/*************************************************************************
  > File Name   : deblank.c
  > Author      : zfx
  > Created Time: 2016年02月16日 星期二 23时18分54秒
 ************************************************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include"deblank.h"

#define ONLY_ONE_WORD 1

/* delete useless blank in a string */
void deblank( char string[] )
{
#if 0
    char *ptr_dst = string;
    char *ptr_b1 = string;
    char *ptr_b2 = string;
    char *tmp = ( char *)malloc( sizeof( char ));   
    ptr_dst++;
    ptr_b2++;
#endif
    int ptr_dst = 1;
    int ptr_b1 = 0;
    int ptr_b2 = 1;
    
    //check input
    if( strlen( string ) <= ONLY_ONE_WORD ){
        printf("This string only has one word ,no need for deblank\n");
    }else{
#if 0
        while( *ptr_b2 != '\0'){
            if( *ptr_b1 == ' ' && *ptr_b2 == ' ' ){
                //only move ptr_b*
                //not copy char
                ptr_b1++;
                ptr_b2++;
            }else{ 
                //copy string[ ptr_b2 ] to string[ ptr_dst ]
                *tmp = *ptr_b2;
                *ptr_dst = *tmp;
                //move ptr_*
                ptr_dst++;
                ptr_b1++;
                ptr_b2++;
            }
        }//endwhile
        //full rest of string with '\0'
        for( ; ptr_dst != ptr_b2; ptr_dst++){
            *ptr_dst = '\0';
        }//end for
#endif
        while( string[ptr_b2] != '\0'){
            if( string[ptr_b1] == ' ' && string[ptr_b2] == ' ' ){
                //only move ptr_b*
                //not copy char
                ptr_b1++;
                ptr_b2++;
            }else{ 
                //copy string[ ptr_b2 ] to string[ ptr_dst ]
                printf("%c\t%c\t%c\n", string[ptr_dst], string[ptr_b1], string[ptr_b2]);
                if( ptr_dst != ptr_b2 ){
                    string[ptr_dst] = string[ptr_b2] ;
                }
                //move ptr_*
                ptr_dst++;
                ptr_b1++;
                ptr_b2++;
            }
        }//endwhile
        //full rest of string with '\0'
        for( ; ptr_dst <= ptr_b2; ptr_dst++){
            string[ptr_dst] = '\0';
        }//end for
    }//endif
}
