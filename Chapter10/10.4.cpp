#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    std::vector<double> vec;
    double temp;
    while (std::cin >> temp)
        vec.push_back(temp);
    std::cout << std::accumulate(vec.begin(), vec.end(), 0) << std::endl; //结果是int，而不是double!!!
    return 0;
}