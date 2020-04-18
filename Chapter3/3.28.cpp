/*
string sa[10]; //没有初始化，string是非内置类型，因此，数组中是10个空字符串
int ia[10]; //没有初始化，int是内置类型；在所有函数外，ia中是10个0
int main(){
    string sa2[10]; //数组中是10个空字符串
    int ia2[10]; // 未定义的值
}
*/
#include <string>
using std::string;

string sa[10]; //没有初始化，string是非内置类型，因此，数组中是10个空字符串
int ia[10]; //没有初始化，int是内置类型；在所有函数外，ia中是10个0
int main(){
    string sa2[10]; //数组中是10个空字符串
    int ia2[10]; // 未定义的值
    return 0;
}