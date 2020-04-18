#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void elimDups(vector<string> &strs)
{
    sort(strs.begin(), strs.end());
    auto first_iter = unique(strs.begin(), strs.end());
    strs.erase(first_iter, strs.end());
}

int biggies(vector<string> &strs, vector<string>::size_type size)
{
    elimDups(strs);
    stable_sort(strs.begin(), strs.end(), [](const string &s1, const string &s2) {
        return s1.length() < s2.length();
    });
    auto first_iter = stable_partition(strs.begin(), strs.end(), [size](const string &s) -> bool{
        return s.length < size;
    });
    return distance(first_iter, strs.end());
}