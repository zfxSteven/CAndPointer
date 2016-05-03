/*************************************************************************
  > File Name   : char_classify.c
  > Author      : zfx
  > Created Time: 2016年04月20日 星期三 02时21分29秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#include"char_classify.h"

void pStat( char_type str_sta)
{
    printf("ctrl:%f %%\n",(str_sta.char_ctrl*1.0)/str_sta.char_length);
    printf("space:%f %%\n",(str_sta.char_space*1.0)/str_sta.char_length);
    printf("number:%f %%\n",(str_sta.char_num*1.0)/str_sta.char_length);
    printf("lower alphabet:%f %%\n",(str_sta.char_lower*1.0)/str_sta.char_length);
    printf("upper alphabet:%f %%\n",(str_sta.char_upper*1.0)/str_sta.char_length);
    printf("punct:%f %%\n",(str_sta.char_punct*1.0)/str_sta.char_length);
    printf("unprint:%f %%\n",(str_sta.char_unprint*1.0)/str_sta.char_length);
    printf("length:%d\n",str_sta.char_length);
}
void init( int *ptr)
{
    int i;
    for( i = 0; i < STAT_LEN; i++){
        *ptr++ = 0;
    }
}
int char_classify_statisic( char const *string)
{
    char_type str_sta;
    init( &str_sta.char_ctrl);
    str_sta.char_length = str_sta.char_unprint = strlen( string );
    while( *string != '\0'){
        if( iscntrl(*string )){
            str_sta.char_ctrl++;
        string++;
            continue;
        }
        if( isspace(*string )){
            str_sta.char_space++;
        string++;
            continue;
        }
        if( isdigit(*string ) || isxdigit( *string )){
            str_sta.char_num++;
        string++;
            continue;
        }
        if( islower(*string )){
            str_sta.char_lower++;
        string++;
            continue;
        }
        if( isupper(*string )){
            str_sta.char_upper++;
        string++;
            continue;
        }
        if( ispunct(*string )){
            str_sta.char_punct++;
        string++;
            continue;
        }
    }//end-while
    int *ptr = &str_sta.char_ctrl;
    int i;
    for( i = 0; i < STAT_LEN - 1; i++){
        str_sta.char_unprint -= *ptr++;
    }
    pStat( str_sta );
    return EXIT_SUCCESS;
}

