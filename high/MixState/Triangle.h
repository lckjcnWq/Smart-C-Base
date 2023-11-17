//
// Created by 伍泉 on 2023/11/16.
//

#ifndef C1_TRIANGLE_H
#define C1_TRIANGLE_H
#include "Shape.h"

class Triangle: public Shape{
public:
    Triangle( int a=0, int b=0):Shape(a, b) { }
    int area ();
};


#endif //C1_TRIANGLE_H
