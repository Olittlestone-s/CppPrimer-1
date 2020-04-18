#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//对于这个输入，结果仍旧正确，这是因为数据本身具有特殊性

int main()
{
    vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin();
    while (iter != vi.end())
    {
        if (*iter % 2)
        {
            vi.insert(iter, *iter);
            // iter = vi.insert(iter, *iter);
            ++iter;
            ++iter;
        }
        else
        {
            vi.erase(iter);
            // iter = vi.erase(iter);
        }
    }
    for_each(vi.begin(), vi.end(), [](int num) -> void {
        cout << num << ' ';
    });
    cout << endl;
    return 0;
}