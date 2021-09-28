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

template<class T>
class Test{
public:
    Test() { cout << "default ctr\n"; }
};

int main(int argc, char** argv)
{
    Test<int>* ptr = 0;
    return 0;
}
