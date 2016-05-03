/*************************************************************************
  > File Name   : single_tax.c
  > Author      : zfx
  > Created Time: 2016年04月16日 星期六 23时10分51秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"single_tax.h"

float income_level[] = { 0.0, 23350.0, 56550.0, 117950.0, 256500.0 };
float tax_rate[] = { 0.15, 0.28, 0.31, 0.36, 0.396};
float tax_fixed[] = { 0.0, 3502.5, 12798.5, 31832.5, 81710.5 };


float single_tax( float income)
{
    if( income < 0 ){
        printf("Error Input! Income below ZERO!\n");
        exit(-1);
    }

    int tax_level = 0;
    float tax = 0;

    //tax level 
    while( income > income_level[ tax_level ] && tax_level <= 4){
        tax_level++;
    }

    //count tax 
    tax = tax_fixed[ tax_level - 1 ] + ( income - income_level[tax_level - 1]) * tax_rate[tax_level - 1];

    return tax ;
}
