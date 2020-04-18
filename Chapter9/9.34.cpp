/*
例如：{1, 2, 3};
iter指向1，调用insert(iter, *iter)在当前位置之前插入一个当前数，{1, 1, 2, 3}
插入完成后，iter执行第一个“1”，执行++iter，iter指向第二个“1”，再次插入...
如此，iter用于不能等于end
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{1, 2, 3};
    auto iter = vec.begin();
    while(iter != vec.end()){//死循环
        if(*iter % 2){
            iter = vec.insert(iter, *iter);
        }
        ++iter;
    }
    for(auto num : vec) cout << num << ' ';
    cout << endl;
    return 0;
}