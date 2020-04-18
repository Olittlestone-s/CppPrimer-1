/*
输出100 45，因为for header中定义了新的变量i覆盖局部变量i，所以sum保存的是从0~9的所有数字的和
for执行结束后，for header中定义的i便不可见，因此打印语句中访问的i是最初声明的100
*/

#include <iostream>

int main(){
    int i = 100, sum = 0;
    for(int i = 0; i != 10; ++i){
        sum += i;
    }
    std::cout << i << " " << sum << std::endl; //output: 100 45
    return 0;
}