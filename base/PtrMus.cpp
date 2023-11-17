//
// Created by 伍泉 on 2023/11/14.
//

#include "PtrMus.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void PtrMus::prtPlus() {
    int var[Max] = {10,100,200};
    int *ptr;
    ptr = var;
    for (int i=0;i<Max;i++){
        cout << ptr << endl;
        cout << *ptr << endl;
        //移动到下一个位置
        ptr++;
    }
}

void PtrMus::prtSub() {
    int var[Max] = {10,100,200};
    int *ptr;
    ptr = &var[Max-1];
    for (int i=Max;i>0;i--){
        cout << ptr << endl;
        cout << *ptr << endl;
        //移动到下一个位置
        ptr--;
    }
}

void PtrMus::ptrCompare() {
    int var[Max] = {10,100,200};
    int *ptr;
    ptr = var;
    while (ptr <= &var[Max-1]){
        cout << ptr << endl;
        cout << *ptr << endl;
        //移动到下一个位置
        ptr++;
    }
}

void PtrMus::ptrArray() {
    int var[Max] = {10,100,200};
    int *ptr;
    ptr = var;

    for(int i=0;i<Max;i++){
        cout << ptr << endl;
        cout << *ptr << endl;
        ptr++;
    }
}

// 指向指针的指针
void PtrMus::ptr2Ptr() {
     int var;
     int *ptr;
     int **pptr;
     var = 3000;
     ptr = &var;
     pptr = &ptr;

     cout << var <<endl;
     cout << *ptr <<endl;
     cout << **pptr <<endl;

}

//传递指针给函数
void PtrMus::getSeconds(unsigned long *par) {
    *par = time(NULL);
    return;
}

// 传递指针给函数
void PtrMus::ptrToVoid() {
    unsigned long sec;
}

int PtrMus::getPtr() {

}

//从函数返回指针
int *PtrMus::getRandom() {
    static int r[10];
    srand((unsigned )time(nullptr));
    for(int i=0;i<10;i++){
        r[i] = rand();
        cout << r[i] <<endl;
    }
    return r;
}

double PtrMus::getAverage(int *arr, int size) {
    int i, sum=0;
    for(i=0;i<size;i++){
        sum += arr[i];
    }
    return (double )sum / size;
}
