#include <map>
#include <iostream>

using namespace std;

int main()
{
    map<int, int> m{{1, 1}, {2, 2}};
    auto iter = m.lower_bound(0);
    auto iter2 = m.upper_bound(0);
    return 0;
}