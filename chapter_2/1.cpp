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
    Base() = default;
};

class D{
public:
    Base b;
    char* str;
};

int main(int argc, char** argv)
{
    D d;
    cout << d.str << endl;

    return 0;
}
