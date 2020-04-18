#include <utility>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main(){
    string temp;
    int num;
    vector<pair<string, int>> vec;
    while(cin >> temp >> num){
        vec.push_back({temp, num});
    }
    for(auto &p : vec)
    {
        cout << p.first << " : " << p.second << endl;
    }
    return 0;
}