#include <iostream>
#include <string>
#include <ctype.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    string str;
    cin >> str;
    for(char ch : str){
        if(!ispunct(ch)){
            cout << ch;
        }
    }
    cout << endl;
    return 0;
}