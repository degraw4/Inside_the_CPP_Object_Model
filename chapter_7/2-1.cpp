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

extern double foo(double);

template<class T>
class Test{
public:
    void intVariant(){
        foo(_val);
    }
    void typeVariant(){
        foo(_member);
    }
private:
    int _val;
    T _member;
};

int main(int argc, char** argv)
{
    extern int foo(int);
    Test<int> t;
    //t.intVariant();
    t.typeVariant();

    return 0;
}
