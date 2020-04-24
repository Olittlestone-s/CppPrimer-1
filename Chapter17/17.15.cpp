#include <string>
#include <regex>
#include <iostream>

using namespace std;

int main()
{
    string pattern = "[[:alpha:]]*^([^c]ie)[[:alpha:]]*";
    regex r(pattern);
    string word;
    while(cin >> word)
    {
        if(regex_match(word, r))
        {
            cout << "matched!" << endl;
        }else{
            cout << "unmatched" << endl;
        }
    }
    return 0;
}