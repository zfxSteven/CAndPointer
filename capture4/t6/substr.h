/*************************************************************************
  > File Name   : substr.h
  > Author      : zfx
  > Created Time: 2016年02月16日 星期二 22时38分51秒
 ************************************************************************/

#ifndef _SUBSTR_H
#define _SUBSTR_H

/* copy a string that less than or equal to  len chars 
 * from src to dst 
 * begin from 'start' char
 * end with '\0'
 * return dst length*/
int substr( char dst[], char src[], int start, int len );

#endif
