void swap(int *&ptr1, int *&ptr2){
    auto temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
}

#include <iostream>

using std::cout;
using std::endl;

int main(){
    int a = 1, *pa = &a;
    int b = 2, *pb = &b;
    cout << "*pa = " << *pa << endl;
    cout << "*pb = " << *pb << endl;
    swap(pa, pb);
    cout << "after swap..." << endl;
    cout << "*pa = " << *pa << endl;
    cout << "*pb = " << *pb << endl;
    return 0;
}