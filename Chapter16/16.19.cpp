
#include <iostream>
#include <vector>
using namespace std;

template <typename Container>
void print(const Container &container)
{
    //使用typename显式说明这是一个类型，不是static variable
    for (typename Container::size_type index = 0; index < container.size(); ++index)
    {
        cout << container[index] << ' ';
    }
    cout << endl;
}

int main(){
    vector<int> vec{1, 2, 3};
    print(vec);
    return 0;   
}