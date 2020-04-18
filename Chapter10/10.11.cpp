#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

template <typename T>
void elimDups(vector<T> &vec)
{
    sort(vec.begin(), vec.end());
    auto unique_end = unique(vec.begin(), vec.end());
    vec.erase(unique_end, vec.end());
}

bool isShorter(const string &str1, const string &str2)
{
    return str1.size() < str2.size();
}

int main()
{
    vector<string> strs{"fox", "jumps", "over", "quick", "red", "slow", "the", "turtle"};
    elimDups<string>(strs);
    stable_sort(strs.begin(), strs.end(), isShorter);
    for (auto &str : strs)
    {
        cout << str << ' ';
    }
    cout << endl;
    return 0;
}