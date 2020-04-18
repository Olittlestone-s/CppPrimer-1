#include <iostream>

using std::cout;
using std::endl;

/*
    显然，引用更舒服~
*/
void mySwap(int &num1, int &num2){
    num1 ^= num2;
    num2 ^= num1;
    num1 ^= num2;
}

int main(){
    int n1 = 10, n2 = 13;
    cout << "n1 = " << n1 << ", n2 = " << n2 << endl;
    mySwap(n1, n2);
    cout << "n1 = " << n1 << ", n2 = " << n2 << endl;
    return 0;
}