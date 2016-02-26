/*************************************************************************
  > File Name   : bitsArray.h
  > Author      : zfx
  > Created Time: 2016年02月26日 星期五 20时11分14秒
 ************************************************************************/

#ifndef _BITSARRAY_H
#define _BITSARRAY_H

/* include boolen defination */
#include"myEnDef.h"

#define BIT_ARRAY_LEN 20

/* set bit_array[ bit_number ] = 1 */
void set_bit( char bit_array[], unsigned bit_number );
/* set bit_array[ bit_number ] = 0 */
void clear_bit( char bit_array[], unsigned bit_number );
/* if value is 0,  set bit_array[ bit_number ] = 0 
 * else  set bit_array[ bit_number ] = 1 
 * */
void assign_bit( char bit_array[], unsigned bit_number, int value );
/* if bit_array[ bit_number] is 0 ,return false
 * else return true */
boolen test_bit( char bit_array[], unsigned bit_number );


#endif
