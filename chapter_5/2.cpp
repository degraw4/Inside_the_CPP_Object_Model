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

class Base{
public:
    Base() { size(); }
    virtual void size() { cout << "Base\n"; }
};

class Derive: public Base{
public:
    Derive() { size(); }
    void size() override { cout << "Derive\n"; }
};



int main(int argc, char** argv)
{
    Derive d;

    return 0;
}
