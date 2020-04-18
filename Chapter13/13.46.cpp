#include <iostream>
#include <vector>
using namespace std;

int f()
{
    return 1;
}

int main()
{
    vector<int> vi{100};
    int &&r1 = f(); //函数返回值是rvalue，临时对象
    int &r2 = vi[0]; //下标返回lvalue
    int &r3 = r1; //r1是rvalue
    int &&r4 = vi[0] * f(); //算术表达式的结果是rvalue
    return 0;
}