#include <list>
#include <iterator>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    list<int> lst;
    copy(vec.cbegin() + 3, vec.cbegin() + 7, front_inserter(lst));
    ostream_iterator<int> out_iter(cout, " ");
    copy(lst.begin(), lst.end(), out_iter);
    return 0;
}