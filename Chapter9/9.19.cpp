#include <string>
#include <iostream>
#include <list>


using namespace std;

int main(){
    list<string> dq; //只需要把容器类型变为list，其他不用改变
    string temp;
    while(cin >> temp){
        dq.push_back(temp); //将temp复制到容器中
    }
    for(decltype(dq)::const_iterator iter = dq.cbegin(); iter != dq.cend(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}