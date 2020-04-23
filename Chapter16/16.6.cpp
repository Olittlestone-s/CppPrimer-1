
/*
begin()的结果应该就是数组首元素
end()的结果应该是首元素的地址 + 元素数
*/

template <typename T, unsigned N>
T *begin(const T (&array)[N])
{
    if (N == 0)
    {
        return nullptr;
    }
    return const_cast<T*>(&array[0]);
}

template <typename T, unsigned N>
T *end(const T (&array)[N])
{
    T *begin_iter = begin(array);
    if (!begin_iter)
        return begin_iter;
    else
        return begin_iter + N;
}

#include <iostream>

int main()
{
    int array[3]{1, 2, 3};
    for (auto iter = begin(array); iter != end(array); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
    return 0;
}