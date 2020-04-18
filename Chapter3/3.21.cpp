#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main(){
    vector<int> v{1,2,3,4,5,6,7,8,9};
    for(auto iter = v.begin(); iter != v.end(); ++iter){
        *iter = *iter * *iter;
    }
    for(auto citer = v.cbegin(); citer != v.cend(); ++citer){
        cout << *citer << ' ';
    }
    cout << endl;
    return 0;
}