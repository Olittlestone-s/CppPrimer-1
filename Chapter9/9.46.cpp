#include <string>
#include <iostream>

using namespace std;

string concatnate(const string &prefix, const string &name, const string &suffix)
{   
    string res(name);
    res.insert(0, prefix);
    res.insert(res.length(), suffix);
    return res;
}

int main(){
    cout << concatnate("Ms.", "name", "Jr.") << endl;
    return 0;
}