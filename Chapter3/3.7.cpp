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
    getline(cin,str);
    int len = str.size();
    for(char i = 0;i < len;i++)     
    //算术表达式隐式转换顺序为：
    //1、char - int - long - double
    //2、float - double
    {
        if(str[i] != ' ')
        str[i] = 'X';
    }
    cout << str << endl;
    return 0;
}
