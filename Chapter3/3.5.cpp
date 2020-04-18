#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void report_concatenation(){
    string str1, str2;
    cin >> str1 >> str2;
    string concatenated = str1 + str2;
    cout << "concatenated: \"" << concatenated << "\"" << endl;
}

int main(){
    report_concatenation();
    return 0;
}