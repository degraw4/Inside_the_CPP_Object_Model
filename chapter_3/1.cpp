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

class X{ public:char i;};
class Y: public virtual X{};
class Z: public virtual X{};
class A: public Z, public Y{};

int main(int argc, char** argv)
{
    X x;
    Y y;
    Z z;
    A a;
    cout << sizeof(x) << endl;
    cout << sizeof(y) << endl;
    cout << sizeof(z) << endl;
    cout << sizeof(a) << endl;


    return 0;
}
