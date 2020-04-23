#include <iostream>
#include <algorithm>

template <typename T>
int compare(const T &o1, const T &o2)
{
    auto TLess = std::less<T>();
    if (TLess(o1, o2))
        return -1;
    if (TLess(o2, o1))
        return 1;
    return 0;
}

// int main()
// {
//     std::cout << compare(1, 2) << std::endl;
//     std::cout << compare(1.0, 2.0) << std::endl;
//     return 0;
// }