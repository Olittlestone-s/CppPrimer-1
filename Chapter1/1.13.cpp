#include <iostream>

int main()
{
    int summation = 0;
    for(int val = 1; val <= 10; ++val)
    {
        summation += val;
    }
    std::cout << "The summation of 1 to 10 inclusive is " << summation << std::endl;
    return 0;
}