#include <string>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

void elimDups(vector<string> &strs)
{
    sort(strs.begin(), strs.end());
    auto first_iter = unique(strs.begin(), strs.end());
    strs.erase(first_iter, strs.end());
}

bool check_size(const string &str, const int length){
    return str.length() < length;
}

int biggies(vector<string> &strs, vector<string>::size_type size)
{
    elimDups(strs);
    stable_sort(strs.begin(), strs.end(), [](const string &s1, const string &s2) {
        return s1.length() < s2.length();
    });
    auto first_iter = partition(strs.begin(), strs.end(), bind(check_size, placeholders::_1, 5));
    return distance(first_iter, strs.end());
}