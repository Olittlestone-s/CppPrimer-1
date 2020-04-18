#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    map<string, size_t> counters;
    string temp;
    istream_iterator<string> in_iter(cin), end;
    while(in_iter != end){
        ++counters[*in_iter++];
    }
    for_each(counters.begin(), counters.end(), [](const pair<string, size_t> cnt){
        cout << cnt.first << " : " << cnt.second << endl;
    });
    return 0;
}