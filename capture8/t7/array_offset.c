/*************************************************************************
  > File Name   : array_offset.c
  > Author      : zfx
  > Created Time: 2016年04月17日 星期日 13时41分11秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

#include"array_offset.h"

#define STACK_DIMENSION 10
#define END 0
int stack_d[ STACK_DIMENSION ];//every dimension length
int d_top;
int stack_l[ STACK_DIMENSION ];//location in every dimension
int l_top;

/* return 1 for inside
 * 0 for outside*/
/* return location in one dimension matrix */
int array_offset(int arrayinfo[], ...)
{
    va_list input_ptr;//state input arguements ptr
    va_start( input_ptr, arrayinfo);//init ptr

    //check input if illegel or not
    int i;
    int input_dimension;
    //empty stack
    d_top = l_top = 0;
    for( i = 0; i < arrayinfo[0]; i++){
        input_dimension = (int)va_arg(input_ptr,int);
        //inferior limit
        if( input_dimension < arrayinfo[ i * 2 + 1] ){
            printf("input = %d, d = %d lower than inferior limits!\n", input_dimension, i);
            va_end( input_ptr);
            return false;
            break;
        }
        //upper bound
        if( input_dimension > arrayinfo[ i * 2 + 2] ){
            printf("input = %d,d = %d more than upper bound!\n", input_dimension, i);
            va_end( input_ptr);
            return false;
            break;
        }
        //dimension length
        stack_d[ d_top++ ] = arrayinfo[ i*2+2 ] - arrayinfo[ i*2+1 ] + 1;//actually dimension length
        //location
        stack_l[ l_top++ ] = input_dimension - arrayinfo[ i*2+1 ] ;//relative loaction
    }//end-for

    //reverse stack_d
    for( i = 0; i < arrayinfo[0]/2 ; i++){
        stack_d[i] ^= stack_d[ arrayinfo[0] - 1 - i];
        stack_d[ arrayinfo[0] - 1 - i] ^= stack_d[i];    
        stack_d[i] ^= stack_d[ arrayinfo[0] - 1 - i];
    }

    //calculate loaction in one dimention matrix
    int loc;//loaction 
    int bias;//current one line matrix length
    for( i = arrayinfo[0], bias = stack_l[ i - 1 ]; i > END ; i-- ){
        bias += (stack_l[ i - 1 ])* cur_d_len( stack_d, i, arrayinfo[0]);
    }

    return bias;
}

//current dimension length
int cur_d_len( int stack[],int dimension ,int dim_s)
{   
    //the lowest one 
    if( dimension == dim_s ){
        return 0;
    }else{//calculate
        int i;
        int length = 1;
        for( i = dim_s; i > dimension; i--){
            length *= stack[ i - 1 ];
        }
        return length;
    }
}
