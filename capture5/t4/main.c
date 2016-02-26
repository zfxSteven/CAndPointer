/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Created Time: 2016年02月26日 星期五 20时11分57秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"bitsArray.h"

int main()
{
    char bits[ BIT_ARRAY_LEN ];
    int i;
    for( i = 0; i < BIT_ARRAY_LEN; i++ ){
        set_bit( bits , i );
    }
    printf("%s\n", bits );
    for( i = 0; i < BIT_ARRAY_LEN; i++ ){
        clear_bit( bits , i );
    }
    printf("%s\n", bits );
    //assign_bit()
    assign_bit( bits , 5 , 1 );
    printf("value = 1 , loaction = 5 ,bits:%s\n", bits );
    assign_bit( bits , 5 , 0 );
    printf("value = 0 , loaction = 5 ,bits:%s\n", bits );
    //test_bit()
    printf("bits:%sloaction = 5 ,boolen:%d\n", bits ,test_bit( bits , 5 ));
    set_bit( bits , 8 );
    printf("bits:%sloaction = 8 ,boolen:%d\n", bits ,test_bit( bits , 8 ));
    return EXIT_SUCCESS;
}
