/*************************************************************************
  > File Name   : test.c
  > Author      : zfx
  > Mail        : zfx050621@163.com
  > Created Time: 2016年02月09日 星期二 07时11分00秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
typedef float short_testType;
typedef double  long_testType;
typedef int testType;
int main()
{
    short_testType a_short=1.0;
    fprintf(stdout,"a_short=%f,spaces for memory:%d bytes\n", a_short, sizeof (a_short) );

    long_testType tmp;
    long_testType a_long=1.0;
    tmp = a_long;
    fprintf(stdout,"a_long=%f,spaces for memory:%d bytes\n", a_long, sizeof (a_long) );
    
    //test
    a_long = a_short;
    fprintf(stdout,"a_long = a_short = %f\n", a_long);
#if 0
    long long int i=0;
    while( a_long >= 0){
        tmp=a_long;
        if((i%1000000000) == 0 ){
            fprintf(stdout,"%f\n",a_long);
        }
        a_long=a_long+10000.0;
        i++;
    }
#endif
    fprintf(stdout,"a_tmp = %f\t a_long = %f\n", tmp, a_long);
  
    return EXIT_SUCCESS;
}
