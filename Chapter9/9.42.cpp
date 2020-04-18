#include <string>
#include <iostream>
int main(){
    /*
    通过使用reserve预分配至少100个元素所需要的空间
    */
    std::string res;
    res.reserve(100);
    char ch;
    while(std::cin >> ch){
        res.push_back(ch);
    }
    return 0;
}