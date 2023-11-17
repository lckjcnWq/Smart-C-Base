//
// Created by 伍泉 on 2023/11/16.
//

#ifndef C1_STACK_H
#define C1_STACK_H
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>
using namespace std;
template <class T>
class Stack {
private:
    vector<T> elems;
public:
    void push(T const&);  //入栈
    void pop();  //出栈
    T top() const;            // 返回栈顶元素
};


#endif //C1_STACK_H
