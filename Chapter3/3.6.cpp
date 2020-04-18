#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    string str;
    cin >> str;
    for(auto& ch : str){
        ch = 'X';
    }
    cout << str << endl;
    return 0;
}