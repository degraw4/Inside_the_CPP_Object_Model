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
    void x() {}
    virtual void y() {}
};

int main(int argc, char** argv)
{
    Test t;
    cout << &Test::x << endl;
    cout << &Test::y << endl;

    return 0;
}
