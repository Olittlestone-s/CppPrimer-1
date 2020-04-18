#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec(10, INT32_MIN);
    fill_n(vec.begin(), vec.size(), 0);
    return 0;
}