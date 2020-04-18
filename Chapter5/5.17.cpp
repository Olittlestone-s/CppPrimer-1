#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

bool isPrefix(vector<int> &prefix, vector<int> &pattern){
    if(prefix.size() > pattern.size()){
        swap(prefix, pattern);
    }
    for(auto iter = prefix.cbegin(), iter2 = pattern.cbegin();
        iter != prefix.cend();
        ++iter, ++iter2){
        if(*iter != *iter2){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> prefix{0, 1, 1, 2};
    vector<int> pattern{0, 1, 1, 2, 3, 5, 8};
    cout << (isPrefix(prefix, pattern) ? "true" : "false") << endl;
    cout << (isPrefix(pattern, prefix) ? "true" : "false") << endl;

    return 0;
}