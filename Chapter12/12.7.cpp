#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

shared_ptr<vector<int>> empty_vec()
{
    return make_shared<vector<int>>();
}

void inflate_vec(shared_ptr<vector<int>> &p_vec)
{
    int num;
    while (cin >> num && num != -1)
    {
        p_vec->push_back(num);
    }
}

void print_vec(shared_ptr<vector<int>> &p_vec)
{
    for_each(p_vec->begin(), p_vec->end(), [](int num) -> void {
        cout << num << ' ';
    });
    cout << endl;
}

int main()
{
    auto pointer = empty_vec();
    inflate_vec(pointer);
    print_vec(pointer);
    return 0;
}