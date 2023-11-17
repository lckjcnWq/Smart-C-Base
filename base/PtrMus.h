//
// Created by 伍泉 on 2023/11/14.
//

#ifndef C1_PTRMUS_H
#define C1_PTRMUS_H
const int Max = 3;

class PtrMus {
private:
public:
    void prtPlus();
    void prtSub();
    void ptrCompare();
    void ptrArray();
    void ptr2Ptr();
    void ptrToVoid();
    void getSeconds(unsigned long *par);
    int  getPtr();
    int  *getRandom();
    double getAverage(int *arr,int size);
};


#endif //C1_PTRMUS_H
