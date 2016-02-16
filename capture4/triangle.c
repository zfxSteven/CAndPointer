/*************************************************************************
  > File Name   : triangle.c
  > Author      : zfx
  > Mail        : zfx050621@163.com
  > Created Time: 2016年02月15日 星期一 04时57分08秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"myEnDef.h"
#include"triangle.h"


//rearrange a,b,c in a nondecreasing list
boolen arrangeTri( TriType *const a, TriType *const b, TriType *const c)
{   
    TriType tmp;
    boolen flag = false;
    //a,b nondecreasing
    if( *a >= *b ){ tmp = *a;    *a = *b;  *b = tmp;}
    //insert c
    if( *c < *a){ tmp = *c; *c = *b; *b = *a;*a = tmp;
        flag = true;
    }else if( *c >= *a && *c <= *b){
        tmp = *c ; *c = *b ; *b = tmp;
        flag = true;
    }else if( *c >= *b){
        flag = true;
    }
    return flag;
}


//judge if a, b, c can combine a triangle
boolen judgeTri( TriType *a, TriType *b, TriType *c)
{
    //arrange 
    if( arrangeTri ( a, b, c) != true ){
        return false;}
    //judge
    if( *a + *b <= *c ){ return false ;}
    
    return true;
}

boolen judgeIsoTri( TriType *a, TriType *b, TriType *c)
{
    //judge triangle
    if( judgeTri( a, b, c) != true ){ return false;}
    //judege isosceles triangle
    if( *a == *b || *b == *c ){
        return true;
    }
    return false;
}

boolen judgeRegTri( TriType *a, TriType *b, TriType *c)
{
    //arrange 
    if( arrangeTri ( a, b, c) != true ){ return false;}
    //judge regular triangle
    if( *a == *b &&  *b == *c ){ 
        return true;}

    return false;
}
