
#include <functional>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> vec{1, 2, 3, 4};
    auto beg = vec.begin(), end = vec.end();
    int target_module = 2;
    //找到第一个对2取余得０的
    auto iter = find_if_not(beg, end, bind(modulus<int>(), placeholders::_1, target_module));
    cout << (*iter) << endl;
    return 0;
}