#include <iostream>

using namespace std;

class Point
{
public:
    Point() = default;
    Point(const Point &p)
    {
        cout << "copy constructor" << endl;
    }

    Point &operator=(const Point &p)
    {
        cout << "assign constructor" << endl;
        return *this;
    }
};

Point global;

Point foo_bar(Point arg)
{
    Point local = arg,
    *heap = new Point(global);
    *heap = local;
    Point pa[4] = {local, *heap};
    return *heap;
}

int main()
{
    Point p;
    foo_bar(p); //共发生6次拷贝构造
    return 0;
}