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
    Base() { cout << "default\n"; }
    Base(int i){ cout << "ctr\n"; }
    Base(const Base& b){ cout << "copy\n"; }
};

int main(int argc, char** argv)
{
    cout << "b1:\n";
    Base b1(10);
    cout << "b2:\n";
    Base b2 = Base(10);
    cout << "b3:\n";
    Base b3 = (Base)10;
    cout << "b4:\n";
    Base b4 = Base(b1);
    cout << "b5:\n";
    Base b5 = (Base)b1;

    return 0;
}
