#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> *empty_vec()
{
    return new vector<int>;
}

vector<int> *inflate_vec(vector<int> *p_vec)
{
    int num;
    while (cin >> num && num != -1)
    {
        p_vec->push_back(num);
    }
    return p_vec;
}

vector<int> *print_vec(vector<int> *p_vec)
{
    for_each(p_vec->begin(), p_vec->end(), [](int num) -> void {
        cout << num << ' ';
    });
    cout << endl;
    return p_vec;
}

int main()
{
    auto pointer = empty_vec();
    pointer = inflate_vec(pointer);
    pointer = print_vec(pointer);
    delete pointer;
    pointer = nullptr;
    return 0;
}