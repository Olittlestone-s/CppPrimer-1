#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

using namespace std;

int main(){
    istream_iterator<int> in_iter(cin), end;
    vector<int> vec;
    copy(in_iter, end, back_inserter(vec));
    sort(vec.begin(), vec.end());
    auto unique_end = unique(vec.begin(), vec.end());
    ostream_iterator<int> out_iter(cout, " ");
    copy(vec.begin(), unique_end, out_iter);
    return 0;
}