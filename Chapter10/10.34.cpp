#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    for(std::vector<int>::reverse_iterator riter = vec.crend(); riter != vec.crbegin(); ++riter){
        std::cout << *riter << ' ';
    }
    std::cout << std::endl;
    return 0;
}