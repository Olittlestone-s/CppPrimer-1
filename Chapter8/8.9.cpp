#include <sstream>
#include <string>
#include <iostream>

using std::istringstream;
using std::string;
using std::cout;
using std::endl;

int main(){
    int val;
    istringstream is("13");
    is >> val;
    cout << "从istringstream读入了：" << val << endl;
    return 0;
}

/*********************另外一种解法******************************/
#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>
using namespace std;
struct PersonInfo{
    string name;
    vector<string>phones;
};
int main(){
    string sline,word;
    vector<PersonInfo> people;
    ifstream line("people.txt");
    while (getline(line,sline))
    {
        PersonInfo info;
        std::istringstream record(sline);
        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }
    for(auto &elem:people){
        cout<<elem.name<<" "<<elem.phones[0]<<endl;
    }
    return 0;
}
