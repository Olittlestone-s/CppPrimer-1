#include <iostream>

using std::cout;
using std::endl;

void reset(int &number){
    number = 0;
}

int main(){
    int number = 11;
    cout << "number = " << number << endl;
    reset(number);
    cout << "number = " << number << endl;
    return 0;
}