#include <iterator>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    vector<string> vec;
    istream_iterator<string> in_iter(cin), end;
    copy(in_iter, end, back_inserter(vec));
    return 0;
}