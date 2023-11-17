//
// Created by 伍泉 on 2023/11/16.
//

#include "CThread.h"
void *PrintHello(void *threadid)
{
    // 对传入的参数进行强制类型转换，由无类型指针变为整形数指针，然后再读取
    int tid = *((int*)threadid);
    cout << "Hello Runoob! --------------------------------------thread ID, " << tid << endl;
    pthread_exit(nullptr);
}

void *PrintHello2(void *threadarg)
{
    struct thread_data *my_data;

    my_data = (struct thread_data *) threadarg;

    cout << "Thread ID : " << my_data->thread_id ;
    cout << " Message : " << my_data->message << endl;

    pthread_exit(NULL);
}

void CThread::createNumThread() {
    pthread_t mThreads[NUM_THREADS];
    int indexes[NUM_THREADS];// 用数组来保存i的值
    int rc;
    int i;
    for(i=0;i<NUM_THREADS; i++){
        cout << "main() : create thread, " << i << endl;
        indexes[i] = i;
        rc = pthread_create(&mThreads[i], nullptr,PrintHello,(void *)&(indexes[i]));
        if (rc){
            cout << "Error:can not create thread," << rc << endl;
            exit(-1);
        }
    }
    pthread_exit(nullptr);
}

//向线程传递参数
void CThread::createThreadByParameter() {
    pthread_t mThreads[NUM_THREADS];
    struct thread_data td[NUM_THREADS];// 用数组来保存i的值
    int rc;
    int i;
    for(i=0;i<NUM_THREADS; i++){
        cout << "main() : create thread, " << i << endl;
        td[i].thread_id = i;
        td[i].message = (char *)"this is message";
        rc = pthread_create(&mThreads[i], nullptr,PrintHello2,(void *)&(td[i]));
        if (rc){
            cout << "Error:can not create thread," << rc << endl;
            exit(-1);
        }
    }
    pthread_exit(nullptr);
}
