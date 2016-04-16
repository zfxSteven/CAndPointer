/*************************************************************************
  > File Name   : print_zfx.h
  > Author      : zfx
  > Created Time: 2016年04月10日 星期日 17时24分45秒
 ************************************************************************/

#ifndef _PRINT_ZFX_H
#define _PRINT_ZFX_H
/* get all the format input 
 * and judge the which format you get
 * choose correct function*/
int print_zfx( char *string, ...);


/* all format print function */
int print_int( int int_input);
int print_float( float float_input);
int print_double( double double_input);
int print_string( char *string_input);
int printChar( char c);
#endif
