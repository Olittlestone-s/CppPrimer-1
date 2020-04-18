#include <iostream>

int main()
{
    int lower, upper;
    std::cin >> lower >> upper;
    if(lower <= upper){
        int summation = 0;
        for(int val = lower; val <= upper; ++val){
            summation += val;
        }
        std::cout << "The summation of " << lower << " through " << upper << " inclusive is " << summation << std::endl;
    }else{
        std::cout << "Empty range: " << lower << " to " << upper << std::endl;
    }
    return 0;
}