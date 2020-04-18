#include <iostream>

int main()
{   
    int val = 0;
    int summation = 0;
    while(std::cin >> val){
        summation += val;
    }
    std::cout << "The summation is " << summation << std::endl;
    return 0;
}