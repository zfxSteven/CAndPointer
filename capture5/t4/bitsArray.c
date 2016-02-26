/*************************************************************************
  > File Name   : bitsArray.c
  > Author      : zfx
  > Created Time: 2016年02月26日 星期五 20时11分42秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"bitsArray.h"

void set_bit( char bit_array[], unsigned bit_number )
{
    //check array bounds
    if( bit_number < 0 && bit_number >= BIT_ARRAY_LEN ){
        exit( OVERFLOW );
    }
    //set
    bit_array[ bit_number ] = '1';
}

void clear_bit( char bit_array[], unsigned bit_number)
{
    //check array bounds
    if( bit_number < 0 && bit_number >= BIT_ARRAY_LEN ){
        exit( OVERFLOW );
    }
    //set
    bit_array[ bit_number ] = '0';
}

void assign_bit( char bit_array[], unsigned bit_number, int value )
{
    //check array bounds
    if( bit_number < 0 && bit_number >= BIT_ARRAY_LEN ){
        exit( OVERFLOW );
    }
    //set
    if( value ){
        bit_array[ bit_number ] = '1';
    }else{
        bit_array[ bit_number ] = '0';
    }
}

boolen test_bit( char bit_array[], unsigned bit_number)
{
    //check array bounds
    if( bit_number < 0 && bit_number >= BIT_ARRAY_LEN ){
        exit( OVERFLOW );
    }
    //test
    if( bit_array[ bit_number ] == '0' ){
        return false;
    }else{
        return true;
    }
}
