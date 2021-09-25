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
#include <cstring>

using namespace std;

class Test{
public:
    virtual void func1() { cout << "func1\n"; }
    virtual void func2() { cout << "func2\n"; }
};

int main(int argc, char** argv)
{
    Test t;
    typedef void (*pf)();
    pf vptr = nullptr;
    memcpy(&vptr, &t, sizeof(pf));
    cout << "vptr is: " << vptr << endl;
    pf p1 = (pf)*vptr;
    //pf p1;
    cout << sizeof(p1) << endl;
    p1();
    pf p2 = (pf)*(vptr + 1);
    p2();

    return 0;
}
