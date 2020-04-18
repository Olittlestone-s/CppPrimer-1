/*
条件运算符优先级很低，因此等价于
((s + s[s.size() - 1]) == 's') ? "" : "s";
s + s[s.size() - 1]的结果是`string`
string与's'无法比较相等性！
*/

#include <string>

using std::string;

int main(){
    string s = "world";
    // string pl = s + s[s.size() - 1] == 's' ? "" : "s";
    return 0;
}