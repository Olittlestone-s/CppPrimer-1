
class Sales_data;

bool compareIsbn(const Sales_data &record1, const Sales_data &record2)
{
    return record1.isbn() < record2.isb();
}

#include <algorithm>
#include <vector>

std::vector<Sales_data> vec;
sort(vec.begin(), vec.end(), compareIsbn);