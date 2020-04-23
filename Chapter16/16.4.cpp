#include <iostream>
#include <list>
#include <string>
#include <vector>

template <typename Iterator, typename Value>
Iterator find(const Iterator &begin, const Iterator &end, const Value &target)
{
    Iterator iter = begin;
    while (iter != end)
    {
        if (*iter == target)
            break;
        ++iter;
    }
    return iter;
}

void test_vector_int()
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 8, 9, 10};
    const int target = 3;
    auto res = find(vec.begin(), vec.end(), target);
    if (res != vec.end())
    {
        std::cout << "find " << target << " in vector of int" << std::endl;
    }
    else
    {
        std::cout << "not found!" << std::endl;
    }
}

void test_list_string()
{
    std::list<std::string> lst{"a", "b", "c", "d"};
    const std::string target = "c";
    auto res = find(lst.begin(), lst.end(), target);
    if (res != lst.end())
    {
        std::cout << "find " << target << " in list of string" << std::endl;
    }
    else
    {
        std::cout << "not found" << std::endl;
    }
}

int main()
{
    test_vector_int();
    test_list_string();
    return 0;
}