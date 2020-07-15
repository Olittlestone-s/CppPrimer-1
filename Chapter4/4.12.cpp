#include <iostream>

using std::cout;
using std::endl;

/*
等价于：(i != j） < k
*/

int main(){
    int i = 1, j = 2, k = 3;
    cout << (i != j < k) << endl;
    return 0;
}
