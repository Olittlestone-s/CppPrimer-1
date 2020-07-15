/*
乘法和除法操作符具有相同的优先级，且其优先级比加减法高，算术运算符是左结合的，
所以`5 + 10 * 20/2`等价于`(5 + ((10 * 20) / 2))`，其结果是
105
*/
#include<iostream>
using namespace std;
int main(){
    int sum = 5+10*20/2;
    cout<<sum<<endl;
    return 0;
}
