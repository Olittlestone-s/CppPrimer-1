
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main()
{
    vector<int> vec;
    list<int> lst;
    const int target = 0;
    auto vecIter = find(vec.crbegin(), vec.crend(), target);
    auto lstIter = find(lst.crbegin(), lst.crend(), target);
    return 0;
}