/*************************************************************************
  > File Name   : buffer_manager.h
  > Author      : zfx
  > Created Time: 2016年04月12日 星期二 13时00分02秒
 ************************************************************************/

#ifndef _BUFFER_MANAGER_H
#define _BUFFER_MANAGER_H

/* word buffer stack*/

//words buffer( limited storage space )
#define MAX_LEN 200
extern char *buffer[MAX_LEN];
char **top_buffer = buffer;
//int top_buffer ;// ptr_buffer->buffer

//word list
#define WORDLIST_LEN 10
static char *wl_num_0_9[] = 
{
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine",
    NULL
};
static char *wl_num_10_19[] = 
{
    NULL,"ten","eleven","twelve","thirteen","fourteen","fifteen",
    "sixteen","seventeen","eighteen","nineteen",NULL
};
static char *wl_num_10k_startFrom10[] = 
{
    NULL,"ten","twenty","thirty","forty","fifty",
    "sixty","seventy","eighty","ninety",NULL
};
static char *wl_orderOfMagnitude[]=
{
    "hundred",
    "thousand",
    "million",
    "billion",
    "trillion",
    NULL
};

#endif
