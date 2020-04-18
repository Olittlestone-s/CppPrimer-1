#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(){
    int array[10] = {};
    int i = 0;
    for(int & elem : array){
        elem = i++;
    }

    //赋值array到array2
    int array2[10];
    for(size_t index = 0; index < 10; ++index){
        array2[index] = array[index];
    }
    
    //使用vector<int>实现3.31的功能
    vector<size_t> vec(10);
    i = 0;
    for(auto& num : vec){
        num = i++;
    }
    for(auto num : vec){
        cout << num << ' ';
    }
    cout << endl;
}