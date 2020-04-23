
#include <iostream>
#include <vector>
#include <list>
using namespace std;

template <typename Container>
void print(const Container &container)
{
    //使用typename显式说明这是一个类型，不是static variable
    for (typename Container::const_iterator iter = container.cbegin(); iter != container.cend(); ++iter)
    {
        cout << (*iter) << ' ';
    }
    cout << endl;
}

int main()
{
    vector<int> vec{1, 2, 3};
    print(vec);
    list<string> lst{"first", "second", "third"};
    print(lst);
    return 0;
}