#include <iostream>
template <typename RType, typename VType>
RType sum(std::initializer_list<VType> lst)
{
    RType ans = 0;
    for (auto value : lst)
    {
        ans += value;
    }
    return ans;
}

int main()
{
    //返回值类型必须由使用者指定
    sum<unsigned long>({1, 2, 3, 4});
    return 0;
}