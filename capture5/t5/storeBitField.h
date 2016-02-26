/*************************************************************************
  > File Name   : storeBitField.h
  > Author      : zfx
  > Created Time: 2016年02月26日 星期五 23时45分46秒
 ************************************************************************/

#ifndef _STOREBITFIELD_H
#define _STOREBITFIELD_H

#include"myEnDef.h"

#define BYTE_LEN 8
#define NUM_LEN sizeof(int)*BYTE_LEN
typedef int ElemType;

/* a copy program for specific copy function 
 * value_to_store is align right */
ElemType store_bit_field( ElemType original_value, ElemType value_to_store,
        unsigned starting_bit, unsigned ending_bit);

ElemType initMask( unsigned starting_bit, unsigned ending_bit);

boolen store_bit_field_input_check(ElemType value_to_store,
        unsigned starting_bit, unsigned ending_bit );

#endif
