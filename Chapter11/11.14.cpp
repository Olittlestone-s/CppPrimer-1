#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

int main(){
    map<string, vector<pair<string, string>>> families;
    string line;
    while(getline(cin, line))
    {
        istringstream is(line);
        string first_name, last_name, birthday;
        is >> first_name >> last_name >> birthday;
        families[last_name].push_back({first_name, birthday});
    }
    for(auto &family : families)
    {
        cout << family.first << ":" << endl;
        for(auto &p : family.second)
        {
            cout << "\t" << p.first << "\t" << p.second << endl;
        }
    }
    return 0;
}