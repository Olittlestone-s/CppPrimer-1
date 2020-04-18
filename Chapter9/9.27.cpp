#include <iostream>
#include <forward_list>
#include <iterator>

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    std::forward_list<int> flst(std::begin(ia), std::end(ia));
    auto prev = flst.before_begin();
    auto curr = flst.cbegin();
    while (curr != flst.end())
    {
        if ((*curr & 1) == 1)
        {
            curr = flst.erase_after(prev);
        }
        else
        {
            ++curr;
            ++prev;
        }
    }
    for (int num : flst)
        std::cout << num << ' ';
    std::cout << std::endl;
    return 0;
}