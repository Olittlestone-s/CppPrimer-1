#include <iostream>
#include <algorithm>
#include <iterator>
#include <cstring>

int main()
{   
    const char *p1 = "abcd";
    const char *p2 = "abcde";
    // 是 c-style string也没有关系...pointer to char 也可通过解引用访问元素
    // 也支持自增和不等性比较
    std::cout << (std::equal(p1, p1 + strlen(p1), p2) ? "相等" : "不等") << std::endl;
    return 0;
}