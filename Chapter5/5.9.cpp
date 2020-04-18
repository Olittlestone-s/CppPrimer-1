#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int vowelCnt = 0;
    char ch;
    while(cin >> ch){
        ch = tolower(ch);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            ++vowelCnt;
        }
    }
    std::cout << vowelCnt << endl;
    return 0;
}