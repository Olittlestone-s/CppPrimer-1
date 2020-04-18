#include <iostream>

int main(){
    //output: Who goes with Fergus?
    std::cout << "Who goes with F\145rgus?\012" << std::endl;
    //output: 31.4
    std::cout << 3.14E1 << std::endl;
    //output: 非法字面量
    //std::cout << 2014f << std::endl;
    //output: 3.14
    std::cout << 3.14L << std::endl;
    return 0;
}