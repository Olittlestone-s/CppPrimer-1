#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

int main(){
    multimap<string, string> families;
    string temp_name;
    while(getline(cin, temp_name))
    {
        istringstream is(temp_name);
        string first_name, last_name;
        is >> first_name >> last_name;
        families.insert({last_name, first_name});
    }
    for(auto &p : families)
    {
        cout << p.first << ":" << p.second << endl;
    }
    return 0;
}