#include <iostream>
#include "base/PtrMus.h"
#include "high/Line.h"
#include "high/friend/BigBox.h"
#include "high/MixState/Shape.h"
#include "high/MixState/Rectangle.h"
#include "high/MixState/Triangle.h"
#include "file/FileRead.h"
#include "signal/SingalPro.h"
#include "thread/CThread.h"

using namespace std;

int main() {

    PtrMus *c1 = new PtrMus();
//    c1->prtPlus();
//    c1->prtSub();
//    c1->ptrCompare();
//    c1->ptrArray();
//    c1->ptr2Ptr();

    /*unsigned long sec;
    c1->getSeconds(&sec);
    cout<< sec << endl;*/

    /*int *p;
    p = c1->getRandom();
    for(int i=0;i<10;i++){
        cout << "*(p + " << i << ") : ";
        cout<< *(p+i) <<endl;
    }*/

    /* char name[50];

     int balance[5] = {200,120,101,123,145};
     cout<< c1->getAverage(balance,5) <<endl;
     delete c1;

     clog<< "this is error" << endl;

     cout << "请输入名字" << endl;

     cin >> name;

     cout << "你的名字是" << name << endl;*/

    /*Line *l1 = new Line();
    Line l2(*l1);
    l1->display(l2);

    delete(l1);*/

    //友元类
    /* Box box;
     BigBox big;
     box.setWidth(10.0);
     printWidth(box);
     big.Print(20, box);*/

    /*Shape *shape;
    Rectangle rec(10, 7);
    Triangle tri(10, 5);
    shape = &rec;
    shape->area();

    shape = &tri;
    shape->area();*/

   /* FileRead *file = new FileRead();
    file->readFile();*/
    /*SingalPro a;
    a.createSingnal();*/
    CThread c;
//    c.createNumThread();
    c.createThreadByParameter();
    return 0;
}
