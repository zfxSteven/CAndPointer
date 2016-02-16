/*************************************************************************
  > File Name   : p4.1.c
  > Author      : zfx
  > Mail        : zfx050621@163.com
  > Created Time: 2016年02月14日 星期日 15时10分12秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

/* Environment Defination */
typedef double ElemType;
//ElemType n;// input n 

//Approach to the squre root of n
ElemType a_App( ElemType e , ElemType n )
{
    return ( e + n / e) * 0.5;
}

int main()
{   
    ElemType n;
//#if 0
    printf("Please input n:");
    scanf("%lf", &n);
//#endif
//    n = 100.0;

    ElemType tmp , a ;
    for( tmp = 0.0 , a = 1.0 ; tmp != ( a = a_App( a , n )) ; tmp = a){
        fprintf(stdout," a = %.10f\n", a );
    }

    return EXIT_SUCCESS;
}
