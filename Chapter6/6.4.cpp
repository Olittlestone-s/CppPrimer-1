#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int fact(const int n){
    if(n < 1){
        return 1;
    }else{
        return n * fact(n - 1);
    }
}

int main(){
    int num;
    cout << "输入要计算的数字：";
    while(cin >> num){
        cout << num << "! = " << fact(num) << endl;
    }
    return 0;
}