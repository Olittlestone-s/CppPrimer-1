#include <algorithm>
#include <string>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{1, 2, 3};
    list<int> inserter_list;
    list<int> backinserter_list;
    list<int> front_inserter_list;
    copy(vec.begin(), vec.end(), inserter(inserter_list, inserter_list.begin()));// 1 2 3
    copy(vec.begin(), vec.end(), back_inserter(backinserter_list));//1 2 3
    copy(vec.begin(), vec.end(), front_inserter(front_inserter_list));//3 2 1
    return 0;
}