#include <iostream>
#include <vector>
#include <set>
#include <iterator>
#include <algorithm>

using namespace std;

/*
使用vector存储非重复元素，必须先读入所有元素
要去除重复元素，必须先排序，在去重，最后将重复元素删除

而set在添加的时候就可以保证，已经存在的元素不会重复地添加，因此set维护唯一性更方便
*/

int main()
{
    vector<string> vec;
    auto iter = inserter(vec, vec.end());
    string temp;
    while(cin >> temp) *iter = temp;
    sort(vec.begin(), vec.end());
    auto first_dup_iter = unique(vec.begin(), vec.end());
    vec.erase(first_dup_iter, vec.end());
    for(auto &str : vec)
    {
        cout << str << ' ';
    }
    cout << endl;
    return 0;
}