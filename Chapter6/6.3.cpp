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
    cout << fact(-1) << endl;
    cout << fact(0) << endl;
    cout << fact(1) << endl;
    cout << fact(2) << endl;
    cout << fact(3) << endl;
    return 0;
}