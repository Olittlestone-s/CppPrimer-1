#include <iostream>
#include <string>

using namespace std;

int main()
{   
    string pattern("ab2c3d7R4E6");
    string str;
    cout << (str.find_first_of(pattern) == string::npos ? "true" : "false") << endl;
    cout << (str.find_first_not_of(pattern) == string::npos ? "true" : "false") << endl;
    return 0;
}