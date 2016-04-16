/*************************************************************************
  > File Name   : delsubstr.c
  > Author      : zfx
  > Created Time: 2016年03月12日 星期六 20时43分51秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"delsubstr.h"
#include"findchar.h"

int del_substr( char *str, char const *substr)
{
    char *ptr_substr = find_char( str, substr );
    char *ptr;
    printf("before:%s\n", str);
    printf("start at:%s\n", ptr_substr);
    printf("delete:%s\n", substr);
    
    //subdtr length
    int substr_length = 0;
    for( ptr = substr; *ptr++ != '\0'; substr_length++ );
    printf("substr_length = %d\n", substr_length);

    //copy rest chars
    for( ; *(ptr_substr + substr_length) != '\0'; ptr_substr++ ){
        *ptr_substr = *( ptr_substr + substr_length );
    }
    *ptr_substr = '\0';
    printf("after:%s\n", str );

    return EXIT_SUCCESS;
}
