#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::endl;

int main(){
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(auto &num : vec){
        num <<= num & 1 ? 1 : 0;
    }
    for(auto num : vec){
        cout << num << ' ';
    }
    cout << endl;
    return 0;
}