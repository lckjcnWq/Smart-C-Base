//
// Created by 伍泉 on 2023/11/15.
//

#ifndef C1_BOX_H
#define C1_BOX_H


class Box {
    double width;
public:
    friend void printWidth(Box box);
    friend class BigBox;
    void setWidth(double wid);
};


#endif //C1_BOX_H
