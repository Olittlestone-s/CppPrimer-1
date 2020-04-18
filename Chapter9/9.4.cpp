#include <vector>

/*
在指定范围（[beg, end)）内查找指定元素target
如果找到，find返回true，否则返回false
*/
bool find(std::vector<int>::const_iterator beg, std::vector<int>::const_iterator end, const int target)
{
    while(beg != end && *beg != target) 
        ++beg;
    return beg != end;
}