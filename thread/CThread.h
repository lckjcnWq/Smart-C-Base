//
// Created by 伍泉 on 2023/11/16.
//

#ifndef C1_CTHREAD_H
#define C1_CTHREAD_H
#include <iostream>
#include <cstdlib>
#include <pthread.h>
using namespace std;

#define NUM_THREADS 5


struct thread_data{
    int  thread_id;
    char *message;
};

class CThread{
public:
    void createNumThread();
    void createThreadByParameter();
};


#endif //C1_CTHREAD_H
