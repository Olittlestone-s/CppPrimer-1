#include <iostream>

using std::cout;
using std::endl;

int main(){
    int array[10] = {};
    int i = 0;
    for(int & elem : array){
        elem = i++;
    }
    for(int elem : array){
        cout << elem << ' ';
    }
    cout << endl;
}