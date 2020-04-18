#include <iostream>

using std::cout;
using std::endl;

void mySwap(int *pNum1, int *pNum2){
    *pNum1 ^= *pNum2;
    *pNum2 ^= *pNum1;
    *pNum1 ^= *pNum2;
}

int main(){
    int a = 2, b = 2;
    cout << "a = " << a << ", b = " << b << endl;
    mySwap(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}