//使用指针指针管理动态存储
#include <memory>
#include <vector>

using namespace std;

void exercise(int *b, int *e)
{
    vector<int> v(b, e);
    unique_ptr<int[]> p(new int[v.size()]);
    shared_ptr<int[]> p2(new int[v.size()]);
    //exception
}

