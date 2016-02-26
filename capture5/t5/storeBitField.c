/*************************************************************************
  > File Name   : storeBitField.c
  > Author      : zfx
  > Created Time: 2016年02月26日 星期五 23时47分19秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"storeBitField.h"

ElemType store_bit_field( ElemType original_value, ElemType value_to_store, 
        unsigned starting_bit, unsigned ending_bit)
{
    //check location legal or not 
    if( store_bit_field_input_check( value_to_store, starting_bit, ending_bit) != true ){
        exit( OVERFLOW );
    }
    
    //init a mask for value_to_store
    ElemType mask = initMask( starting_bit, ending_bit );
    printf("%x(MASK)\n", mask );
    ElemType convert_mask = ~mask;
    printf("%x(CONVERT_MASK)\n", convert_mask );

    //use mask to clear the location
    original_value &= mask;printf("%x(original_value &= mask)\n",original_value);
    value_to_store <<=  starting_bit;printf("%x(value_to_store <<=  starting_bit)\n", value_to_store);
    value_to_store &= convert_mask;printf("%x(value_to_store &= convert_mask)\n", value_to_store);

    //assign value_to_store to original_value
    original_value |= value_to_store;printf("%x(original_value |= value_to_store)\n",original_value);

    return original_value;
}

ElemType initMask( unsigned starting_bit, unsigned ending_bit)
{
    int ptr_bit;
    ElemType init_mask;
    // all bits is 1
    for( ptr_bit = 0 ; ptr_bit < NUM_LEN ; ptr_bit++){
        init_mask &= ( 0 << ptr_bit );
    }
    //printf("MASK:%x\n", init_mask );
    // copy bits is 0
    for( ptr_bit = starting_bit; ptr_bit <= ending_bit ; ptr_bit++ ){
        init_mask |= ( 1 << ptr_bit );
    }
    //printf("MASK:%x\n", ~init_mask );
    return ~init_mask;
}

boolen store_bit_field_input_check( ElemType value_to_store, 
        unsigned starting_bit, unsigned ending_bit)
{
    //check
    //1.check starting_bit
    if( starting_bit < 0 && starting_bit >= NUM_LEN ){
        printf("ERROR:starting_bit out of boundary!\n");
        return false;
    }
    //2.check ending_bit
    if( ending_bit < starting_bit && ending_bit >= NUM_LEN ){
        printf("ERROR:ending_bit out of boundary!\n");
        return false;
    }
    //3.check value_to_store
    if( sizeof( value_to_store ) > sizeof( ElemType )){
        printf("ERROR:value_to_store is out of boundary!\n");
        return false;
    }
    //4.check original_value
    //
    return true;
}
