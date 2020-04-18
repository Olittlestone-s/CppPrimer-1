#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    string temp;
    vector<string> strs;
    while(cin >> temp){
        strs.push_back(temp);
    }
    for(auto& str : strs){
        for(auto& ch : str){
            ch = toupper(ch);
        }
    }
    int cnt = 0;
    for(const auto& str : strs){
        cout << str << ' ';
        if(++cnt == 8){
            cout << endl;
            cnt = 0;
        }
    }
    return 0;
}