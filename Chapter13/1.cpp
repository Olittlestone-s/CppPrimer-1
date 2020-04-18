#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string>&& convert(int n){
    vector<string> res;
    res.reserve(n);
    for(int i = 0; i<n; ++i){
        string s = to_string(i);
        res.push_back(std::move(s));
    }
    return std::move(res);
}

int main(){
    convert(100);
    return 0;
}