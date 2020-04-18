/*
使用pl保存i变量的地址
*pl = *pl * *pl；语句中，赋值运算符右边的表达式两次对pl指针解引用得到变量i的值，计算i * i的结果得到42 * 42
并将此结果保存在匿名变量中，赋值运算符左边对pl解引用得到变量i的引用，将该引用作为左值，修改变量i的值为匿名变量的值，
即i最后等于42 * 42的积
*/

#include <iostream>

int main()
{
    int i = 42;
    int *pl = &i;
    *pl = *pl * *pl;
    std::cout << 42 * 42 << std::endl;
    std::cout << i << std::endl;
    return 0;
}