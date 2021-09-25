//例子三：在类的静态成员函数中使用类的非静态成员
#include <iostream>
using namespace std;

class Point{
public:
    void init()
    {
    }
    static void output()
    {
        //cout << "m_x=" << m_x << endl;
    }
private:
    int m_x;
};
void main()
{
    Point pt;
    pt.output();
}