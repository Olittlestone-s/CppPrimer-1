#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
    string currentStr;//存储当前输入的单词
    string resStr;//暂存当前出现次数最多的单词
    int maxCnt;//判断出现最多的次数是多少
    if(cin >> currentStr){//将首部单词进行单独判断
        resStr = currentStr;
        int maxCnt = 1;
        int cnt = 1;
        string temp;
        while(cin >> temp){//判断除了首部单词之外的单词
            if(temp == currentStr){
                ++cnt;
            }else{
                if(cnt > maxCnt){
                    resStr = currentStr;
                    maxCnt = cnt;
                }
                cnt = 1;
                currentStr = temp;
            }
        }
        if(cnt > maxCnt){  //进行末尾单词的判断，避免因为闪退，没有判断最后一个单词
        resStr = currentStr;
        maxCnt = cnt;
        }
        cout << resStr << " " << maxCnt << " times." << endl;
    }
    return 0;
}
