/*************************************************************************
  > File Name   : written_amount.c
  > Author      : zfx
  > Created Time: 2016年04月12日 星期二 12时41分28秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"written_amount.h"
#include"buffer_manager.h"

/* use a buffer to storage the words*/

void written_amount( unsigned int amount, char **buffer)
{
    if( amount == 0){
        printf("zero\n");
    }else{
        int tmp_000;// catch '000' for one time exam
        int tmp_magnitude;//->wl_orderOfMagnitude;
        int magnitude_flag = 0;//start from zero
        int ptr_counter = 0;
        int the_unit = 0;//'0'
        int the_decade = 0;//'00'
        int the_hundreds = 0;//'000'
        do{
            tmp_000 = amount % 1000;//get '000'
            the_hundreds = tmp_000 % 100;
            the_decade = tmp_000 % 10 - the_hundreds * 10;
            the_unit = tmp_000 - ( tmp_000 % 10 ) * 10;
            //0 ~ 999
            switch( the_decade ){
                case 0:buffer = string_push( wl_num_0_9[the_unit],buffer);break;
                case 1:buffer = string_push( wl_num_10_19[the_unit],buffer);break;
                default:{
                            buffer = string_push( wl_num_0_9[the_unit], buffer);
                            buffer = string_push( wl_num_10k_startFrom10[the_decade],buffer);
                        }
            }
            buffer = string_push( wl_orderOfMagnitude[0], buffer);//hundred
            buffer = string_push( wl_num_0_9[the_hundreds], buffer);//0-9
            // >= 1000
            if( (amount /= 1000) != 0 ){
                magnitude_flag += 1;
                buffer = string_push( wl_orderOfMagnitude[magnitude_flag], buffer);
            }
        }while( amount != 0 );
    } 
}


/* buffer manager 
 * provide support for buffer */
//init
//void initPtr();
//return the length of src
char **string_push( char const  *src, char **dst)
{
    *dst = src;
    dst++;
    return dst;
}
