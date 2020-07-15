#include<iostream>
using namespace std;
int main(){
    int A[][3] = {1,2,3,4,5,6,7,8,9};
    cout<<"1"<<endl;
    for(size_t (&elem)[3]:A){//引用
        for(size_t i:elem){
            cout<<i<<' ';
        }
        cout<<endl;
    }
    cout<<"2"<<endl;
    for(size_t i = 0;i < 3;i++){//下标
        for(size_t j = 0;j < 3;j++){
            cout<<A[i][j]<<' ';
        }
        cout<<endl;
    }
    // using int_array = int[4];
    // typedef int int_array[4];
    cout<<"3"<<endl;
    using int_array = int[3];

    // for(int (*p)[3] = A;p != A + 3;++p){
    for(int_array *p= A;p != A + 3;++p){//指针
        for(int *q = *p;q != *p+3;q++){
            cout<<*q<<' ';
        }
        cout<<endl;
    }
    return 0;
}
