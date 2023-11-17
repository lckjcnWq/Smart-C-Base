//
// Created by 伍泉 on 2023/11/15.
//

#ifndef C1_LINE_H
#define C1_LINE_H


class Line {

private:
    int *ptr;

public:
    Line();
    Line(const Line &obj);
    ~Line();
    void display(Line object);
    friend void diaplaySelf(Line objct);
};


#endif //C1_LINE_H
