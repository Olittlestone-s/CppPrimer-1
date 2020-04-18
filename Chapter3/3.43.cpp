#include <iostream>

using std::cout;
using std::endl;

int main(){
    int ia[3][4] = { // three elements; each element is an array of size 4
        {0, 1, 2, 3}, // initializers for the row indexed by 0
        {4, 5, 6, 7}, // initializers for the row indexed by 1
        {8, 9, 1, 2} // initializers for the row indexed by 2
    };
    //使用range-for打印数组
    for(const auto &row : ia){
        for(auto col : row){
            cout << col << ' ';
        }
        cout << endl;
    }
    cout << endl;
    //使用下标打印多维数组
    for(size_t row_index = 0; row_index < 3; ++row_index){
        for(size_t col_index = 0; col_index < 4; ++col_index){
            cout << ia[row_index][col_index] << ' ';
        }
        cout << endl;
    }
    cout << endl;
    //使用指针打印多维数组
    for(int (*pRow)[4] = ia; pRow != ia + 3; ++pRow){
        for(int *pCol = *pRow; pCol < *pRow + 4; ++pCol){
            cout << *pCol << ' ';
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}