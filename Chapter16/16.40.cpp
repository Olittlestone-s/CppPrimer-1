#include <vector>
template <typename It>
auto fcn3(It beg, It end) -> decltype(*beg + 0) //合法
{
    return *beg;
}

//decltyp的中使用了表达式，因此返回的是表达式计算结果的类型，是值类型，不是引用类型

int main()
{
    std::vector<int> vec{1, 2};
    int a = fcn3(vec.begin(), vec.end()); //返回类型是*iter的结果类型，是int值，不是int引用
    return 0;
}