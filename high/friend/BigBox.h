//
// Created by 伍泉 on 2023/11/15.
//

#ifndef C1_BIGBOX_H
#define C1_BIGBOX_H
#include <iostream>
#include "Box.h"

using namespace std;

class BigBox {
public :
    void Print(int width, Box &box)
    {
        // BigBox是Box的友元类，它可以直接访问Box类的任何成员
        box.setWidth(width);
        cout << "Width of box : " << box.width << endl;
    }
};


#endif //C1_BIGBOX_H
