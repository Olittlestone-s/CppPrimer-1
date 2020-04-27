#include <regex>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string test_string = "receipt freind theif receive";
    string pattern = "[[:alpha:]]*[^c]ei[[:alpha:]]*";
    regex r(pattern, regex::icase);
    sregex_iterator iter(test_string.begin(), test_string.end(), r);
    sregex_iterator end;
    while(iter != end){
        cout << iter->str() << endl;
        ++iter;
    }
    return 0;
}