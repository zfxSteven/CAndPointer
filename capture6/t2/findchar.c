/*************************************************************************
  > File Name   : findchar.c
  > Author      : zfx
  > Created Time: 2016年03月08日 星期二 19时22分23秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"findchar.h"

char *find_char( char const *source, char const *chars)
{
    //check input 
    if( source == NULL || chars == NULL){ 
        return NULL;
    }

    //compare
    char *ptr_head;
    char *comparePtr;
    int flag = false;

    //Exhaustive method
    for( ptr_head = source; *source++ != '\0'; ptr_head = source){
        flag = true;
        for( comparePtr = chars; *comparePtr != '\0'; comparePtr++, ptr_head++){
            if( *comparePtr != *ptr_head){
                flag = false;
                break;
            }
        }//for-chars-compare
        if( flag == true ){
            break;
        }
    }//for-source

    return (flag == true) ? --source : NULL;
}
