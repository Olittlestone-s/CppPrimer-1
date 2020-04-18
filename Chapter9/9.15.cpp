#include <iostream>
#include <vector>

using namespace std;


int main(){
    vector<int> vec1{1,2,3};
    vector<int> vec2{1,2,3};
    cout << (vec1 == vec2 ? "true" : "false") << endl;
    return 0;
}