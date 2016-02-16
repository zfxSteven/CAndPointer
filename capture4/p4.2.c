/*************************************************************************
  > File Name   : p4.2.c
  > Author      : zfx
  > Mail        : zfx050621@163.com
  > Created Time: 2016年02月14日 星期日 16时13分18秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"calPrime.h"

#define MAXRANGE 10000000

int main()
{
    char *file="/root/CAndPointer/capture4/prime.txt";
    FILE *fp;
    fp = fopen(file,"w+");
    int i;
    for( i = 2; i <= MAXRANGE ; i++ ){
        if( calPrime( i ) == true){ 
            fprintf(fp,"%d\t", i );
        }
    }
    return EXIT_SUCCESS;
}
