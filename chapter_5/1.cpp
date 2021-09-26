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
#include <ctime> 

using namespace std;

class Test{
public:
    Test() = default;
    Test(int a, int b): x(a), y(b) {};
    int x;
    int y;
};

int main(int argc, char** argv)
{
    time_t begin, end;
    begin = clock();
    for(int i = 0; i < 9000000; i++)
        Test t1(1,2);
    end = clock();
    cout << double(end - begin)/CLOCKS_PER_SEC << endl;
    
    begin = clock();
    for(int i = 0; i < 9000000; i++)
        Test t1 = {1, 2};
    end = clock();
    cout << double(end - begin)/CLOCKS_PER_SEC << endl;

    return 0;
}
