#include <string>
#include <iostream>
#include <deque>
#include <list>

using namespace std;

int main()
{
    deque<int> odds, evens;
    list<int> lst{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto num : lst)
    {
        (num & 1 ? odds : evens).push_back(num);
    }
    cout << "odd numbers: " << endl;
    for (auto num : odds)
    {
        cout << num << ' ';
    }
    cout << endl;

    cout << "even numbers：" << endl;
    for (auto num : evens)
    {
        cout << num << ' ';
    }
    cout << endl;
    return 0;
}