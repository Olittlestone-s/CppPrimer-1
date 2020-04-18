#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    for(std::vector<int>::const_iterator iter = vec.cbegin(); iter != vec.cend(); ++iter){
        std::cout << *iter << ' ';
    }
    std::cout << std::endl;
    return 0;
}