#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    vector<int> v(arr + 1, arr + 4);
    for(auto i : v){
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}