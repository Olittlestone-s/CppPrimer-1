
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void elimDups(vector<int> &vec)
{
    sort(vec.begin(), vec.end());
    cout << "排序后:" << endl;
    for_each(vec.begin(), vec.end(), [](int num){cout << num << ' ';}); cout << endl;
    auto unique_end = unique(vec.begin(), vec.end());
    cout << "Unique后:" << endl;
    for_each(vec.begin(), vec.end(), [](int num){cout << num << ' ';}); cout << endl;
    vec.erase(unique_end, vec.end());
}

int main()
{
    vector<int> vec{3, 1, 0, 4, 7, 6, 0, 1, 5, 7, 9, 8, 3, 4, 10, 9};
    cout << "初始序列:" << endl;
    for_each(vec.begin(), vec.end(), [](int num){cout << num << ' ';}); cout << endl;
    elimDups(vec);
    cout << "结果:" <<endl;
    for_each(vec.begin(), vec.end(), [](int num){cout << num << ' ';}); cout << endl;
    return 0;
}