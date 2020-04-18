#include <vector>

/**
 * 返回给定区间（[beg, end)）中第一个指定元素的迭代器
 * 如果找到，则返回第一次出现的位置的迭代器
 * 如果没找到，则返回结果与end相同
 */
std::vector<int>::const_iterator find(std::vector<int>::const_iterator beg, std::vector<int>::const_iterator end, const int target)
{
    while(beg != end && *beg != target) 
        ++beg;
    return beg;
}