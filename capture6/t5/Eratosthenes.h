/*************************************************************************
  > File Name   : Eratosthenes.h
  > Author      : zfx
  > Created Time: 2016年03月13日 星期日 18时29分02秒
 ************************************************************************/

#ifndef _ERATOSTHENES_H
#define _ERATOSTHENES_H

/******Eratosthenes Environment Defination*****/
typedef int boolen;
#define true 1
#define false 0
typedef int ElemType;

#define PRIME_LEN 10


typedef struct{
    ElemType data[ PRIME_LEN ][ PRIME_LEN ];
    int block_length;
}prime_matrix,*prime_matrix_ptr;

    

static boolen initPrimeList();

extern boolen Eratosthenes();
extern void printEratosthenes();
#endif
