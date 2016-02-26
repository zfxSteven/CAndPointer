/*************************************************************************
  > File Name   : t8.4.c
  > Author      : zfx
  > Created Time: 2016年02月18日 星期四 23时07分16秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define CYCLE_TIME 1e10

//compare 'if' and ' ? : '
void compare()
{   
    unsigned long int i; 
    short int test = 1;
    clock_t start, finish, delta;
    
    //if
    for( start = clock(), i = 0; i < CYCLE_TIME; i++ ){
        if( test == 1){
            test = 0;
        }else{
            test = 1;
        }
    }
    finish = clock();
    delta = finish - start;
    printf("d = %d\n", delta );

    //' ? : '
    for( start = clock(), test = 1, i = 0; i < CYCLE_TIME; i++ ){
        test == 1 ? (test = 0) : (test = 1) ;
    }
    finish = clock();
    printf("d = %d\n", finish - start );
    delta = finish - start - delta ;
    printf("%d\n", delta );
}

int main()
{
    compare();
    return EXIT_SUCCESS;
}
