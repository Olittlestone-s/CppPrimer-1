#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main(){
    vector<int> vec{1, 2, 3, 4, 5};
    int arr[10] = {};
    size_t index = 0;
    while(index < 3){
        arr[index++] = vec[index];
    }
    for(auto i : arr){
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}