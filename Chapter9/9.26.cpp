#include <vector>
#include <list>
#include <iostream>
#include <iterator>

using namespace std;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> vec(begin(ia), end(ia));
    list<int> lst(begin(ia), end(ia));

    // 从vecotr中移除奇数
    auto iter = vec.begin();
    while (iter != vec.end())
    {
        if ((*iter & 1) == 0)
        {
            iter = vec.erase(iter);
        }
        else
        {
            ++iter;
        }
    }

    //从list中移除偶数
    auto iter2 = lst.begin();
    while (iter2 != lst.end())
    {
        if ((*iter2 & 1) == 1)
        {
            iter2 = lst.erase(iter2);
        }
        else
        {
            ++iter2;
        }
    }

    //打印移除目标后容器中剩余的元素
    for (int num : vec)
        cout << num << ' ';
    cout << endl;
    for (int num : lst)
        cout << num << ' ';
    cout << endl;
    return 0;
}