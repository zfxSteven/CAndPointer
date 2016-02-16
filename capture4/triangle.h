/*************************************************************************
  > File Name   : triangle.h
  > Author      : zfx
  > Mail        : zfx050621@163.com
  > Created Time: 2016年02月15日 星期一 09时29分29秒
 ************************************************************************/

#ifndef _TRIANGLE_H
#define _TRIANGLE_H

#include"myEnDef.h"

typedef double TriType;
//rearrange a,b,c in a nondecreasing list
boolen arrangeTri( TriType *a, TriType *b, TriType *c);
//judge if a, b, c can combine a triangle
boolen judgeTri( TriType *a, TriType *b, TriType *c);

boolen judgeIsoTri( TriType *a, TriType *b, TriType *c);

boolen judgeRegTri( TriType *a, TriType *b, TriType *c);


#endif
