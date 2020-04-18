/*
（a）合法
（b）非法，*iter的结果是string
（c）`.`的优先级更高，iter没有empty成员
（d）合法
（e）非法，*iter的结果是string
（f）合法
*/

#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main(){
    vector<string> vec{"name"};
    vector<string>::iterator iter = vec.begin();
    *iter++;
    // (*iter)++;
    // *iter.empty();
    iter->empty();
    // ++*iter;
    iter++->empty();
    return 0;
}