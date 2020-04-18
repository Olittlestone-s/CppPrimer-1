#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
    string currentStr;
    string resStr;
    int maxCnt;
    if(cin >> currentStr){
        resStr = currentStr;
        int maxCnt = 1;
        int cnt = 1;
        string temp;
        while(cin >> temp){
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
        cout << resStr << " " << maxCnt << " times." << endl;
    }
    return 0;
}