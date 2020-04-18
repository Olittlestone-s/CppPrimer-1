#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

int plus(int a, int b){return a + b;}
int substract(int a, int b){ return a - b;}
int multiply(int a, int b){return a * b;}
int divide(int a, int b){return a / b;}

int main(){
    vector<int(*)(int, int)> fvec{plus, substract, &multiply, &divide};
    int a = 3, b = 4;
    for(auto f : fvec){
        cout << f(a, b) << endl;
    }

    //函数指针数组
    int (*arr[4])(int, int) = {plus, substract, &multiply, &divide};
     for(auto f : arr){
        cout << f(a, b) << endl;
    }
    return 0;
}

