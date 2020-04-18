#include <iostream>
#include <vector>
using std::cout;
using std::endl;

void f(double d1, double d2=0){
    cout << "f(double, double)" << endl;
}

void f(int a, int b){
    cout << "f(int, int)" << endl;
}

int main(){
    f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.56, 3.14);
    return 0;
}