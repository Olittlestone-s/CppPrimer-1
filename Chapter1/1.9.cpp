#include <iostream>

int main()
{
    int summation = 0;
    int val = 50;
    while(val <= 100)
    {
        summation += val;
        val += 1;
    }
    std::cout << "The summation from 50 to 100 inclusive is " << summation << std::endl;
    return 0;
}