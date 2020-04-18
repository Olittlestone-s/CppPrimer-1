#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    const int length = 4;
    vector<string> strs{"fox", "jumps", "over", "quick", "red", "slow", "the", "turtle"};
    auto lengthPredict = [length](const string &str) -> bool {
        return str.length() < length;
    };
    auto iter = partition(strs.begin(), strs.end(), lengthPredict);
    for (auto &str : strs)
        cout << str << ' ';
    cout << endl;
    cout << "从\"" << *iter << "\"开始，之后的元素都是不符合prediction的" << endl;
    return 0;
}