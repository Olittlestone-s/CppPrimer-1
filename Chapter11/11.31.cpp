#include <map>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    multimap<string, string> works;
    string key, val;
    while(cin >> key >> val)
    {
        if(key == "-" && val == "-") break;
        works.insert({key, val});
    }
    key = "";
    for(auto & p : works)
    {
        if(key != p.first){
            key = p.first;
            cout << key << ":" << endl;
        }
        cout << "\t" << p.second << endl;
    }
    cin.clear();
    cout << "enter target key to delete: ";
    cin >> key;
    for(auto p = works.equal_range(key); p.first != p.second;){
        p.first = works.erase(p.first);
    }
    key = "";
    for(auto & p : works)
    {
        if(key != p.first){
            key = p.first;
        }
        cout << key << ":" << endl;
        cout << "\t" << p.second << endl;
    }
    return 0;
}