#include "16.2.cpp"
#include <iostream>

class A{}; //一种不支持 operator<()的类型

int main(){
    A a1, a2;
    //报错：error: no match for ‘operator<’ (operand types are ‘const A’ and ‘const A’)
    std::cout << compare(a1, a2) << std::endl; 
    return 0;
}