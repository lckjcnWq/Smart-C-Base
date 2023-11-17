//
// Created by 伍泉 on 2023/11/16.
//

#ifndef C1_RECTANGLE_H
#define C1_RECTANGLE_H
#include "Shape.h"

class Rectangle: public Shape {
public:
    Rectangle( int a=0, int b=0):Shape(a, b) { }
    int area ();
};


#endif //C1_RECTANGLE_H
