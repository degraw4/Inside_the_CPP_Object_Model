#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <numeric>
#include <typeinfo>
#include <iterator>
#include <memory>
#include <new>
#include <utility>
#include <functional>
#include <stdexcept>

using namespace std;

// 进入构造函数的函数体之前，类的member已经定义好了
// class自身全为普通member，定义意味着在内存中为他们分配空间，而不是调用class自身的默认构造函数
// class自身含有class member，定义则意味着会调用class member的默认构造函数，然后在函数体中对其赋值or构造（参加line 40，会调用Test的构造函数两次）
// 因此若父类or成员类不含默认构造函数，必须在list中将其初始化

class Test{
public:
    int data;
    Test() { cout << "default\n"; }
    Test(int i){
        cout << &data << endl;
        cout << data << endl;
        data = i;
        cout << "ctr\n";
    }
};

class Test2{
public:
    Test t;
    Test2(){
        cout << "start\n";
        t = Test(10);
    }
};

class Base{
public:
    Base(int i) { a = i; }
    int a;
};

class Derive: public Base{
public:
    Derive():Base(1){}
};

int main(int argc, char** argv)
{
    Test2 t2;
    Derive d;

    return 0;
}
