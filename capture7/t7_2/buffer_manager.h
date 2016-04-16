/*************************************************************************
  > File Name   : buffer_manager.h
  > Author      : zfx
  > Created Time: 2016年04月12日 星期二 13时00分02秒
 ************************************************************************/

#ifndef _BUFFER_AMOUNT_H
#define _BUFFER_AMOUNT_H

/* word buffer */

//words buffer( limited storage space )
#define MAX_LEN 200
char *word_buffer[MAX_LEN];
char **ptr_buffer ;

//word list
#define WORDLIST_LEN 10
char const *wl_num_0_9[] = 
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
char *wl_num_10_19[] = 
{
    NULL,"ten","eleven","twelve","thirteen","fourteen","fifteen",
    "sixteen","seventeen","eighteen","nineteen",NULL
};
char *wl_num_10k_startFrom10[] = 
{
    NULL,"ten","twenty","thirty","forty","fifty",
    "sixty","seventy","eighty","ninety",NULL
};
char *wl_orderOfMagnitude[]=
{
    "hundred",
    "thousand",
    "million",
    "billion",
    "trillion",
    NULL
};

/* buffer manager 
 * provide support for buffer */
//init
void ptr_init()
{
    ptr_buffer = word_buffer;
}

//return the length of src
int string_copy( char const *src, char *dst)
{
    return 0;
}
#endif
