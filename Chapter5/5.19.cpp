#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(){
    string resp;
    do{
        string str1, str2;
        cout << "Enter two string to compare: " << endl;
        cin >> str1 >> str2;
        if(str1.size() < str2.size()){
            cout << "\"" << str1 << "\" is less than \"" << str2 << "\"" << endl;
        }else if(str1.size() > str2.size()){
            cout << "\"" << str2 << "\" is less than \"" << str1 << "\"" << endl;
        }else{
            cout << "\"" << str1 << "\" has same length with \"" << str2 << "\"" << endl;
        }
        cout << "continue?(yes/no): ";
        cin >> resp;
    }while(resp.empty() == false && resp[0] == 'y');
    return 0;
}