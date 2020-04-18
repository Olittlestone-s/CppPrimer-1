#include <algorithm>
#include <string>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{1, 0, 1, 2, 3, 2, 0};
    sort(vec.begin(), vec.end());
    list<int> res;
    unique_copy(vec.begin(), vec.end(), back_inserter(res));
    for(int i : res)
    {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}