//
// Created by 伍泉 on 2023/11/16.
//

#ifndef C1_SHAPE_H
#define C1_SHAPE_H


class Shape {
protected:
    int width, height;
public:
    Shape(int a = 0, int b = 0) {
        width = a;
        height = b;
    }

    virtual int area();
};


#endif //C1_SHAPE_H
