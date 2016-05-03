/*************************************************************************
  > File Name   : char_classify.h
  > Author      : zfx
  > Created Time: 2016年04月20日 星期三 02时18分58秒
 ************************************************************************/

#ifndef _CHAR_CLASSIFY_H
#define _CHAR_CLASSIFY_H
#define STAT_LEN 7

typedef struct char_type{
    int char_ctrl;
    int char_space;
    int char_num;
    int char_lower;
    int char_upper;
    int char_punct;
    int char_unprint;
    int char_length;
}char_type;

int char_classify_statisic( char const *string);

#endif
