//
// Created by 伍泉 on 2023/11/16.
//

#include "Triangle.h"
#include <iostream>
using namespace std;

int Triangle::area() {
    cout << "Triangle class area" <<endl;
    return (width * height / 2);
}
