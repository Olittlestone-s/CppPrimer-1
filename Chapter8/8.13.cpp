#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

struct PersonInfo{
    string name;
    vector<string> phone_numbers;
};

int main(int argc, char *argv[]){
    ifstream ifile;
    ifile.open(argv[1]);
    if(!ifile){
        cerr << "打开文件失败" << endl;
        return -1;
    }
    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    while(getline(ifile, line)){
        cout << "init istream as：" << line << endl;
        record.str(line);
        PersonInfo info;
        record >> info.name;
        cout << info.name << ", ";
        while(record >> word){
            info.phone_numbers.push_back(word);
            cout << info.phone_numbers.back() << ", ";
        }
        cout << endl;
        people.push_back(info);
    }
    return 0;
}