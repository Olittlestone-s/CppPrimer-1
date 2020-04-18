#include <list>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

//一下代码，无法通过编译

int main()
{
    vector<int> vec{1, 2, 3, 4};
    list<int> lst{1, 2, 3, 4};
    map<int, int> m_vec(vec.begin(), vec.end());
    map<int, int> m_lst(lst.begin(), lst.end());
    for (auto &p : m_vec)
    {
        cout << p.first << " : " << p.second << endl;
    }
    for (auto &p : m_lst)
    {
        cout << p.first << " : " << p.second << endl;
    }
    return 0;
}