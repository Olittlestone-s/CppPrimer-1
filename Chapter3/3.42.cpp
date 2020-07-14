#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8};
    vector<int>res(begin(arr),end(arr));//将数组中的元素复制到向量中
    for(auto &i:res){
        cout<<i<<" ";
    }
    int array[9];
    int *p = begin(array);
    int *q = end(array);
    auto it = res.begin();
    auto en = res.end();
    while (p!=q && it != en)//进行元素的复制操作
    {
        *p = *it;
        p++;
        it++;
        /* code */
    }
    cout<<endl;
    for(auto &elem:array){//元素进行遍历操作
        cout<<elem<<" ";
    }
    cout<<endl;
    return 0;
    
}
