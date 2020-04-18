#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cin;

int main(){
    string temp;
    vector<string> strs;
    while(cin >> temp){
        strs.push_back(temp);
    }
    return 0;
}