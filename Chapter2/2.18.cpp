#include <iostream>

int main(){
    int val = 0, *pVal = &val;
    int val2 = 1;
    //改变指针的指向
    pVal = &val2;
    //改变指针所指向的值
    *pVal = 10; //现在val2的值是10
    std::cout << val2 << std::endl; // output: 10
    return 0;
}