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

// new，delete与虚拟机制

class Point{
public:
    Point() { cout << "Point ctr\n"; }
    virtual ~Point() { cout << "Point des\n"; }
};

class Point3D: public Point{
public:
    Point3D() { cout << "Point3D ctr\n"; }
    virtual ~Point3D() { cout << "Point3D des\n"; }
};

int main(int argc, char** argv)
{
    Point* ptr = new Point3D[3];
    delete [] ptr;

    return 0;
}
