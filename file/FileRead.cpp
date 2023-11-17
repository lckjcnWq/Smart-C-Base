//
// Created by 伍泉 on 2023/11/16.
//

#include "FileRead.h"
#include <fstream>
#include <iostream>
using namespace std;

void FileRead::readFile() {
    char data[100];

    //以写模式打开文件
    ofstream outfile;
    outfile.open("afile.dat");

    cout<< "writing to the file" << endl;
    cout<< "Enter your age" << endl;

    cin.getline(data,100);

    //向文件中写入用户输入的数据
    outfile << data << endl;


    outfile.close();

    //以读的形式打开file文件
    ifstream infile;
    infile.open("afile.dat");

    cout << "Reading from the file" << endl;
    infile >> data;

    cout << data << endl;

    infile.close();

}
