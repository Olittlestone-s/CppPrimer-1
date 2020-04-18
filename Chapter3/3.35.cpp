#include <iterator>
using std::begin;
using std::end;

int main(){
    int arr[10];
    //使用指针将数组中的元素全部置零
    auto iter = begin(arr);
    auto endIter = end(arr);
    while(iter != endIter){
        *iter = 0;
    }
    return 0;
}