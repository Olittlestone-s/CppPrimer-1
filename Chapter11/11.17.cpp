#include <set>
#include <vector>
#include <iterator>
#include <iostream>

using namespace std;

int main(){
    vector<int> v{1, 2, 3, 1, 2};
    set<int> c;
    copy(v.begin(), v.end(), inserter(c, c.end()));
    for(int n : c) cout << n << ' ';
    cout << endl;
    // copy(v.begin(), v.end(), back_inserter(c));
    copy(c.begin(), c.end(), inserter(v, v.end()));
    copy(c.begin(), c.end(), back_inserter(v));
    return 0;
}