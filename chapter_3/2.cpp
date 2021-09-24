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
    virtual ~Test() {};
    static int org;
    int x;
    int y;
    int z;
};

int Test::org = 0;

int main(int argc, char** argv)
{
    Test t;
    cout << &t << endl;
    cout << &t.x << endl;
    cout << &Test::x << endl;
    cout << &Test::y << endl;
    cout << &Test::z << endl;
    cout << &Test::org << endl;

    cout << "test2" << endl;
    int Test::* p1 = 0;
    int Test::* p2 = &Test::x;
    cout << p1 << endl;
    cout << p2 << endl;

    return 0;
}
