
#include <climits>
#include <iostream>
#include <iterator>

using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;

void print(const int * arr){
    //假设数组以INT_MIN作为结束标记
    for(auto iter = arr; *iter != INT_MIN; ++iter){
        cout << *iter << " ";
    }
    cout << endl;
}

void print(const int * beg, const int * end){
    while(beg != end){
        cout << *beg++ << ' ';
    }
    cout << endl;
}

void print(const int * arr, size_t size){
    for(size_t index = 0; index != size; ++index){
        cout << arr[index] << ' ';
    }
    cout << endl;
}

int main(){
    int arr[]{0, 1, INT_MIN};
    print(arr);
    print(begin(arr), end(arr) - 1);
    print(arr, end(arr) - 1 - begin(arr));
    return 0;
}