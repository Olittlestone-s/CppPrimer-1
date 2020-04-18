#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using std::string;
using std::vector;
using std::ifstream;
using std::ofstream;

using std::cout;
using std::cin;
using std::cerr;
using std::endl;

int main(int argc, char *argv[]){
    vector<string> lines;
    ifstream ifile;
    ofstream ofile;
    if(argc > 2){
        ifile.open(argv[1]);
        ofile.open(argv[2]);
    }else{
        string ifile_name;
        cout << "输入文件名: ";
        cin >> ifile_name;
        if(!(cin)){
            cerr << "读取文件名失败！" << endl;
            return -1;
        }

        string ofile_name;
        cout << "输出文件名：";
        cin >> ofile_name;
        if(!(cout)){
            cerr << "读取文件名失败！" << endl;
            return -1;
        }
        ifile.open(ifile_name);
        ofile.open(ofile_name);
    }
    if(!ifile){
        cerr << "打开输入文件失败！" << endl;
        return -1;
    }
    if(!ofile){
        cerr << "打开输出文件失败！" << endl;
        return -1;
    }
    string line;
    while(ifile){
        getline(ifile, line);
        lines.push_back(line);
    }
    int line_no = 1;
    for(auto &line : lines){
        ofile << line_no++ << ": " << line << endl;
    }
    return 0;
}