/*
如果将range for header中的声明改为char，则无法对原string做出修改
*/

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    string str;
    cin >> str;
    for(char ch : str){
        ch = 'X'; //修改的local variable ch本身，而不是str中对应的字符
    }
    cout << str << endl;
    return 0;
}