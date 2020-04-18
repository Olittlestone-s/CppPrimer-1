#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using std::string;
using std::vector;
using std::ifstream;

using std::cout;
using std::cin;
using std::cerr;
using std::endl;

int main(int argc, char *argv[]){
    vector<string> lines;
    ifstream ifile;
    if(argc > 1){
        ifile.open(argv[1]);
    }else{
        string ifile_name;
        cout << "输入文件名: ";
        cin >> ifile_name;
        if(!(cin)){
            cerr << "读取文件名失败！" << endl;
            return -1;
        }
    }
    if(!ifile){
        cerr << "打开文件失败！" << endl;
    }
    string line;
    while(ifile){
        getline(ifile, line);
        lines.push_back(line);
    }
    int line_no = 1;
    for(auto &line : lines){
        cout << line_no++ << ": " << line << endl;
    }
    return 0;
}