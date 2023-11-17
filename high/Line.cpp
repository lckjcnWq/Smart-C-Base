//
// Created by 伍泉 on 2023/11/15.
//

#include "Line.h"
#include <iostream>
using namespace std;


//构造函数
Line::Line() {
    cout << "Line create" <<endl;
}

//拷贝构造
Line::Line(const Line &obj) {
    cout << "Line create1" <<endl;
    ptr = new int;
    *ptr = *obj.ptr;
}

//析构函数
Line::~Line() {
    delete ptr;
    cout << "Line release" <<endl;
}

void Line::display(Line object) {
    cout << "Line length:" << object.ptr <<endl;
}

void diaplaySelf(Line objct) {
    cout << "Line diaplaySelf:" << &(objct.ptr) <<endl;
}
