#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

void report_larger(){
    string str1, str2;
    cin >> str1 >> str2;
    if(str1 != str2){
        if(str1 > str2){
            cout << "\"" << str1 << "\" is larger" << endl;
        }else{
            cout << "\"" << str2 << "\" is larger" << endl;
        }
    }
}

void report_longer(){
    string str1, str2;
    cin >> str1 >> str2;
    if(str1.size() > str2.size()){
        cout << "\"" << str1 << "\" is longer" << endl;
    }else if(str2.size() > str1.size()){
        cout << "\"" << str2 << "\" is longer" << endl;
    }else{
        cout << "\"" << str1 << "\" and \"" << str2 << "\" have equal length." << endl;
    }
}

int main(){
    report_longer();
    return 0;
}