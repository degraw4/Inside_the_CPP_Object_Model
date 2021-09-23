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

// 合成的默认构造函数

class Base{
public:
    Base() { cout << "Base default ctr\n"; }
};

class Derive1: public Base {
public:
};

class Derive2: public Base {
public:
    Derive2() { cout << "Derive2 default ctr\n";  }
};

class Derive3: public Base {
public:
    Derive3(): Base() { cout << "Derive3 default ctr\n";  }
};

class M{
public:
    Base b;
};

int main(int argc, char** argv)
{
    // case 1
    M m;
    // case 2
    Derive1 d1;
    Derive2 d2;
    Derive3 d3;

    return 0;
}
