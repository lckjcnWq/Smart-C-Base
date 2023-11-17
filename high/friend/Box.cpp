//
// Created by 伍泉 on 2023/11/15.
//

#include "Box.h"
#include <iostream>
using namespace std;

void Box::setWidth(double wid) {
    width = wid;
}

void printWidth(Box box) {
    cout << "Width of box : " << box.width << endl;
}
