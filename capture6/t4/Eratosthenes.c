/*************************************************************************
  > File Name   : Eratosthenes.c
  > Author      : zfx
  > Created Time: 2016年03月13日 星期日 18时28分30秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"Eratosthenes.h"

/********Eratosthenes Environment Defination******************/
#define MAX_PRIME_LIST_LENGTH 1000
boolen prime_list[ MAX_PRIME_LIST_LENGTH ];//prime list
boolen init_prime_list_flag = false;//if initate list or not

//set all is true
static boolen initPrimeList()
{
    printf("Init prime_list!\n");
    int i;
    boolen *ptr = prime_list;
    if( init_prime_list_flag == false ){
        for( i = 0; i < MAX_PRIME_LIST_LENGTH; i++, ptr++ ){
            *ptr = true;
        }
        // 0 , 1 is not prime 
        // set them false
        ptr = prime_list;
        *ptr++ = false;// prime_list[0];
        *ptr = false ;// prime_list[1];

        init_prime_list_flag = true;

    }
    
    //printEratosthenes();

    return init_prime_list_flag;
}

extern boolen Eratosthenes()
{
    boolen *ptr_prime, *ptr_compare, *ptr_end;
    long int counter, location;
    
    //init prime list
    if( initPrimeList() != true ){
        printf("Initate prime_list failed!\n");
        return false;
    }

    //calculate prime
    ptr_prime = &prime_list[2];
    ptr_end = &prime_list[ MAX_PRIME_LIST_LENGTH - 1 ];
    for( ptr_compare = ptr_prime + 1, location = 2 ; ptr_prime < ptr_end; location++, ptr_prime++, ptr_compare = ptr_prime + 1){
        if( *ptr_prime == true ){//if ptr_prime is prime, delete times of it
            counter = location + 1;//subscript update
            //printf("prime:%d compare_start:%d\n ", location, counter);
            while( counter <= MAX_PRIME_LIST_LENGTH ){
                if( *ptr_compare == true && counter % location == 0){
                    *ptr_compare = false;
                    //printf("l=%d c=%d prime_list[%d]=%d\n", location, counter, counter, *ptr_compare);
                }
                //point to next
                ptr_compare++;
                counter++;
            }//while
            //printf("\n");
        }//if
    }//for-ptr_prime
    
    return true;
}

extern void printEratosthenes()
{
    int i;
    boolen *ptr = prime_list;
#if 0
    for( i = 0, printf("number:"); i < MAX_PRIME_LIST_LENGTH; i++){
        printf("%d ", i );
    }
    printf("\n");
    for( i = 0, printf("value :"); i < MAX_PRIME_LIST_LENGTH; i++, ptr++){
        printf("%d ", *ptr );
    }
    printf("\n");
#endif
    for( i = 0, printf("prime list:"); i < MAX_PRIME_LIST_LENGTH; i++, ptr++){
        if( *ptr == true ){
            printf("%d ", i);
        }
    }
    printf("\n");
}
