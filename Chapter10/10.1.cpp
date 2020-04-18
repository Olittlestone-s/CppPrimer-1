#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int temp;
    vector<int> vec;
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