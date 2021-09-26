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

class Test{
public:
    virtual void func() = 0;
};

void Test::func(){
    cout << "pure\n";
}

class Derive: public Test{
public:
    void func() {}
    void test(){
        // 可以静态调用纯虚函数，但是只能在类内，不可以在类外调用
        Test::func();
    }
};

int main(int argc, char** argv)
{
    Derive d;
    d.test();

    return 0;
}
