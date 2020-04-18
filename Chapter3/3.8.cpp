/*
好的，我还是更喜欢for循环；
因为习惯了，能够更好的控制迭代范围以及步长
*/

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void iterate_by_while(string& str){
    decltype(str.size()) index = 0;
    while(index < str.size()){
        str[index++] = 'X';
    }
}

void iterate_by_for(string& str){
    for(decltype(str.size()) index = 0; index < str.size(); ++index){
        str[index] = 'X';
    }
}

int main(){
    string str;
    cin >> str;
    iterate_by_for(str);
    cout << str << endl;
    return 0;
}