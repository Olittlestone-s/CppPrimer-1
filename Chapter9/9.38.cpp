#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    vector<int> vec(5, 0);
    int capacity = vec.capacity();
    cout << capacity << endl;
    for(int i = 0; i != 1000; ++i){
        vec.push_back(i);
        if(vec.capacity() != capacity){
            cout << setw(3) << capacity << " -> " << vec.capacity() << endl;
            capacity = vec.capacity();
        }
    }
    return 0;
}