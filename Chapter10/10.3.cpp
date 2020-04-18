#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    std::vector<int> vec;
    int temp;
    while (std::cin >> temp)
        vec.push_back(temp);
    std::cout << std::accumulate(vec.begin(), vec.end(), 0) << std::endl;
    return 0;
}