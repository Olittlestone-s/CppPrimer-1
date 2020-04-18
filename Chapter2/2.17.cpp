/*
引用只是所绑定对象的别名，无论对i还是ri赋值，都是在修改i对象的值
*/

#include <iostream>

int main(){
    int i, &ri = i;
    i = 5; ri = 10;
    // output: 10 10
    std::cout << i << " " << ri << std::endl;
    return 0;  
}