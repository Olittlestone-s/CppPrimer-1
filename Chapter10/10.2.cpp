#include <list>
#include <iostream>
#include <algorithm>

using namespace std;
/*
只把上题中使用的vector变为list，其他没有改动，代码仍旧正常运行
*/

int main()
{
    int temp;
    list<int> vec;
    cout << "Enter target: ";
    int target;
    cin >> target;
    cout << endl << "Enter nums：" << endl;
    while (cin >> temp)
    {
        vec.push_back(temp);
    }
    cout << target << "出现了" << count(vec.cbegin(), vec.cend(), target) << "次" << endl;
    return 0;
}