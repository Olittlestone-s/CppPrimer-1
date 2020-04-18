#include <list>
#include <vector>
#include <string>

using namespace std;

int main(){
    list<char *> c_style_lst{"a", "b"};
    //不允许，容器类型不同
    // vector<string> str_vec = c_style_lst;
    vector<string> str_vec;
    // str_vec.assign(c_style_lst); 容器类型不同
    str_vec.assign(c_style_lst.begin(), c_style_lst.end()); //容器类型相同，元素类型可转换（const char* -> string）
    return 0;
}