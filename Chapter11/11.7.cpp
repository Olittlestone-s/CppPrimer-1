#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

int main(){
    map<string, vector<string>> families;
    string temp_name;
    while(getline(cin, temp_name))
    {
        istringstream is(temp_name);
        string first_name, last_name;
        is >> first_name >> last_name;
        families[last_name].push_back(first_name);
    }
    for(auto &family : families)
    {
        cout << family.first << ":" << endl;
        for(auto &name : family.second)
        {
            cout << "\t" << name << endl;
        }
    }
    return 0;
}