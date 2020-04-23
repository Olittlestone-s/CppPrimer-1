#include <vector>

class A
{
public:
    A(int i) {}
}; //缺少默认构造函数的类类型

template class std::vector<A>;

int main()
{

    return 0;
}