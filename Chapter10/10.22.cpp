#include <iostream>
#include <string>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

bool check_length(const string &str, const int length)
{
    return str.length() <= length;
}

int main()
{
    vector<string> strs{"name", "a", "1234567"};
    const int length = 6;
    int res = count_if(strs.begin(), strs.end(), bind(check_length, placeholders::_1, length));
    cout << res << endl;
    return 0;
}