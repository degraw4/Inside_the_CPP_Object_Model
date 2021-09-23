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

// 合成的拷贝构造函数

class Base{
public:
    Base() = default;
    Base(const Base& b) { cout << "Base copy ctr\n"; }
};

class Derive1: public Base {
public:
};

class M {
public:
    Base b;
};

int main(int argc, char** argv)
{
    // case 1
    cout << "case 1:\n";
    Derive1 a;
    Derive1 b = a;
    Derive1 c(a);

    // case 2
    cout << "case 2:\n";
    M m1;
    M m2(m1);
    M m3 = m1;

    return 0;
}
