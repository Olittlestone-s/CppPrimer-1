#include <iostream>
#include <string>

using std::cin;
using std::string;
using std::cout;
using std::endl;

void read_by_line(){
    string line;
    while(getline(cin, line)){
        cout << line << endl;
    }
}

void read_by_word(){
    string word;
    while(cin >> word){
        cout << word << endl;
    }
}

int main(){
    // read_by_line();
    read_by_word();
    return 0;
}