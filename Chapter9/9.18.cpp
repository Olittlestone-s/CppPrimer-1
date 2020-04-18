#include <string>
#include <iostream>
#include <deque>


using namespace std;

int main(){
    deque<string> dq;
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