#include <string>
#include <vector>
#include <iostream>

int main(){
    std::vector<char> vec{'a', 'b', 'c', 'D'};
    std::string str(vec.cbegin(), vec.cend());
    std::cout << str << std::endl;
    return 0;
}