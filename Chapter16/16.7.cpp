

template <typename T, unsigned N>
constexpr unsigned sizeofarr(const T (&arr)[N])
{
    return N * sizeof(T);
}

#include <iostream>

int main()
{
    int arr[1];
    std::cout << sizeofarr(arr) << std::endl;
    return 0;
}