#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

void print(const vector<int>::iterator beg, const vector<int>::iterator end){
    if(beg != end){
        cout << *beg << ' ';
        print(beg + 1, end);
    }else{
        cout << endl;
    }
}

int main(){
    vector<int> vec{1, 2, 3, 4, 5};
    print(vec.begin(), vec.end());
    return 0;
}