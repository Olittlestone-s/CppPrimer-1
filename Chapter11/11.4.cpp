#include <iostream>
#include <map>
#include <string>
#include <set>
#include <iterator>
#include <algorithm>
using namespace std;

void normalize(string &word)
{
    for (auto iter = word.begin(); iter != word.end();)
    {
        if(ispunct(*iter)){
            iter = word.erase(iter);
        }else{
            *iter = towlower(*iter);
            ++iter;
        }
    }
}

int main()
{
    map<string, size_t> counters;
    string temp;
    istream_iterator<string> in_iter(cin), end;
    while (in_iter != end)
    {
        string word = *in_iter++;
        normalize(word);
        ++counters[word];
    }
    for_each(counters.begin(), counters.end(), [](const pair<string, size_t> cnt) {
        cout << cnt.first << " : " << cnt.second << endl;
    });
    return 0;
}