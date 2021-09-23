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

class test{
public:
    string s;
    test(){ cout << "default\n"; }
    test(string ss): s(ss) { cout << "string\n"; }
    test(const test& t): s(t.s) { cout << "copy ctr\n";}
    test& operator=(const test& t) {
        cout << "copy =\n";
        s = t.s;
        return *this; 
    }
};

int main(int argc, char** argv)
{
    string s = "asda"; 
    cout << "a\n";
    test a;
    cout << "b\n";
    test b("aaa");
    cout << "c\n";
    test c = s;
    cout << "d\n";
    test d(s);
    cout << "e\n";
    test e(b);
    cout << "f\n";
    test f = b;

    return 0;
}
