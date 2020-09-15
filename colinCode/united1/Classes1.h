//
// Created by 86138 on 2020/8/9.
//
#include <iostream>
#include <string>
using namespace std;
#ifndef UNITED1_CLASSES1_H
#define UNITED1_CLASSES1_H


class Classes1 {
public:
    Classes1();

    int id;
    string name;

    Classes1(int id, const string &name);

    virtual void run()
    {
      cout<<"running Classes1";
    }
};


#endif //UNITED1_CLASSES1_H
