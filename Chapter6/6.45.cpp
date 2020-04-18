#include <string>
using std::string;

inline bool isShorter(const string &s1, const string &s2){
    return s1.size() < s2.size();
}

int main(){
    
}

/*
逻辑复杂的函数不应该声明为`inline`的，
并且，`inline`只是对编译器的一种建议，至于是否采纳，还是依赖于编译器的特性
*/