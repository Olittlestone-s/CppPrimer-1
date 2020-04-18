#include <vector>
#include <list>
#include <iostream>
using namespace std;

template<typename C1, typename C2>
bool equal(const C1 &c1, const C2 &c2)
{
    auto iter1 = c1.begin(), end1 = c1.end();
    auto iter2 = c2.begin(), end2 = c2.end();
    while(iter1 != end1 && iter2 != end2)
    {
        if(*iter1 != *iter2) return false; //如果对应元素不等
        ++iter1;
        ++iter2;
    }
    return iter1 == end1 && iter2 == end2;//要求长度相等
}

int main(){
    vector<int> vec{1, 2, 3};
    list<int> lst{1, 2, 3};
    cout << (equal(vec, lst) ? "true" : "false") << endl;
    return 0;
}