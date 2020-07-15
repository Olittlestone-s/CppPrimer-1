#include <iostream>

using std::cout;
using std::endl;

int main(){
    int ia[3][4] = { // three elements; each element is an array of size 4
        {0, 1, 2, 3}, // initializers for the row indexed by 0
        {4, 5, 6, 7}, // initializers for the row indexed by 1
        {8, 9, 1, 2} // initializers for the row indexed by 2
    };
    //使用类型别名打印多维数组
    using pArray = int (*)[4];
    for(pArray row = ia; row != ia + 3; ++row){
        for(int *pCol = *row; pCol != *row + 4; ++pCol){
            cout << *pCol << ' ';
        }
        cout << endl;
    }
    cout << endl;

    typedef int (*pArray2)[4];
    for(pArray2 row = ia; row != ia + 3; ++row){
        for(int *pCol = *row; pCol != *row + 4; ++pCol){
            cout << *pCol << ' ';
        }
        cout << endl;
    }
    cout << endl;
    cout <<"**********************************************************************"<<endl;
    int A[][3] = {1,2,3,4,5,6,7,8,9};
    cout<<"1"<<endl;
    using int_array = int[3];
    for(int_array *p= A;p != A + 3;++p){
        for(int *q = *p;q != *p+3;q++){
            cout<<*q<<' ';
        }
        cout<<endl;
    }
    cout<<"2"<<endl;
    typedef int int_array2[3];
    for(int_array2 *p= A;p != A + 3;++p){
        for(int *q = *p;q != *p+3;q++){
            cout<<*q<<' ';
        }
        cout<<endl;
    }
    return 0;
}
