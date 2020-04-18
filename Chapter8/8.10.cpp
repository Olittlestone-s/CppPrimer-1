#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    cout << "输入待读文件名：";
    string ifilename;
    cin >> ifilename;
    ifstream ifile(ifilename);
    if (!ifile)
    {
        cerr << "打开文件失败：" << ifilename << endl;
        return -1;
    }

    //将文件按行读取到lines中
    string line;
    vector<string> lines;
    while (ifile.good())
    {
        getline(ifile, line);
        lines.push_back(line);
    }

    //将lines中的数据按“单词”读到words中
    vector<string> words;
    for (string &line : lines)
    {
        istringstream line_stream(line);
        string temp_word;
        while (line_stream >> temp_word)
        {
            words.push_back(temp_word);
        }
    }

    //输出words中的每个word，每个word单独一行
    for(string &word : words){
        cout << word << endl;
    }
    return 0;
}