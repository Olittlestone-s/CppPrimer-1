#include <cctype>
#include <string>
using std::string;

/*
参数类型不一样，toLower需要修改参数的值，因此，不能是reference to const
*/

bool containsCapital(const string &str){
    /**判断str中是否包含大写字母，如果包含，则返回true，否则返回false**/
    for(auto ch : str){
        if(isupper(ch)) return true;
    }
    return false;
}

void toLower(string &str){
    /**将str中的字符全部转为小写字母**/
    for(auto &ch: str){
        ch = tolower(ch);
    }
}