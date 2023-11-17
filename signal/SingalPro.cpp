//
// Created by 伍泉 on 2023/11/16.
//

#include "SingalPro.h"

void signalHandler( int signum ){
    cout << "Interrupt signal (" << signum << ") received.\n";

    // 清理并关闭
    // 终止程序

    exit(signum);

}

void SingalPro::createSingnal() {
    int i = 0;
    signal(SIGINT, signalHandler);

    while(++i){
        cout << "Going to sleep...." << endl;
        if( i == 3 ){
            raise( SIGINT);
        }
        sleep(1);
    }
}


