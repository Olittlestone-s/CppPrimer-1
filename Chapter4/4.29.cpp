#include <iostream>
using std::cout;
using std::endl;

/*
数组作为sizeof运算符的操作数时，运算结果为整个数组所占的字节数，
sizeof(*x)将不会对x解引用，但是得到的是x所指向的类型，即：sizeof(int)
sizeof(x) / sizeof(*x)得到的是数组的长度（元素数）
p本身是一个指针，在我的机器上是8字节（x86_64），*p所指向的int占用4字节，因此
sizeof(p) / sizeof(*p) 得到 2
*/

int main(){
    int x[10];
    int *p = x;
    cout << sizeof(x) / sizeof(*x) << endl;
    cout << sizeof(p) / sizeof(*p) << endl;
    return 0;
}