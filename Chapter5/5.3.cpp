#include <iostream>

/*
影响可读性！
*/

int main(){
    int sum = 0, val = 1;
    while(val <= 10)
        sum += val, ++val;
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
}