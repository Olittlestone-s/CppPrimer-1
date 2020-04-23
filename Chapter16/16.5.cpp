#include <iostream>

template <typename T, unsigned N, char Delimiter = ','>
void print(const T (&array)[N])
{
    for(unsigned index = 0; index < N - 1; ++index)
    {
        std::cout << array[index] << Delimiter;
    }
    std::cout << array[N - 1];
    std::cout << std::endl;
}

int main()
{
    int arr[3]{1, 3, 5};
    print<int, 3, ' '>(arr);
    return 0;
}