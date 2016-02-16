/*************************************************************************
  > File Name   : sameString.c
  > Author      : zfx
  > Created Time: 2016年02月16日 星期二 03时31分26秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"myEnDef.h"
#include"copy_n.h"
#include"sameString.h"
#define MAXSIZE 20
#define NO_LAST_INPUT 0
#define LAST_INPUT 1

boolen sameString( char *a , char *b )
{
    int i, len;
    //compare length
    if( strlen( a ) != strlen( b ) ){
        return false;
    }else{
        len = strlen( a );
        //compare every character
        for( i = 0 ; i < len ; i++ ){
            if( a[i] != b[i] ){
                return false;
                break;
            }
        }
        return true;
    }
}//end sameString

void printGet()
{
    //distribute memory ,init pointer
    char *lastString = ( char *)malloc( MAXSIZE * sizeof( char )), *buff = ( char *)malloc( MAXSIZE * sizeof( char ));
    char *ptrBuff = buff;//pointer to the head of buff
    char ch;
    int flag = NO_LAST_INPUT , len = 0;

    //start
    printf("Input :");
    //get input till its' end
    while( ( ch = getchar()) != EOF ){
        //one line input end , call compare program
        if( ch == '\n'){
            //end with '\0'
            //ptrBuff--;
            *ptrBuff = '\0';
            if( flag == NO_LAST_INPUT ){
                //no lastString ,copy buff to lastString
                copy_n( lastString , buff , len );
                printf("%s\n", buff );
                ptrBuff = buff;
                flag = LAST_INPUT;
                printf("Input :");
            }else if( flag == LAST_INPUT ){
                //lastString exist , compare with buff
                if( sameString( lastString , buff ) != true){
                    //not same with lastString 
                    printf("%s\n", buff );
                    //copy buff to lastString
                    copy_n( lastString , buff , len);
                    ptrBuff = buff;
                    printf("Input :");
                }else{
                    ptrBuff = buff;
                    printf("Input :");
                }
            }
            len = 0;
        }else{
        //put input in line
        *( ptrBuff++ ) = ch;
        len++;
        }
    }//end while
    free( lastString );free( buff );
    
}//end printGet
