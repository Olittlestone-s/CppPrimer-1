#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int aCnt, eCnt, iCnt, oCnt, uCnt;
    aCnt = eCnt = iCnt = oCnt = uCnt = 0;
    char ch;
    while(cin >> ch){
        switch (ch)
        {
        case 'A':
        case 'a':   
            ++aCnt;
            break;

        case 'E':
        case 'e':
            ++eCnt;
            break;

        case 'i':
        case 'I':
            ++iCnt;
            break;

        case 'o':
        case 'O':
            ++oCnt;
            break;

        case 'u':
        case 'U':
            ++uCnt;
            break;
        }
    }
    cout 
        << "count of (a|A) " << aCnt << endl
        << "count of (e|E) " << aCnt << endl
        << "count of (i|I) " << aCnt << endl
        << "count of (o|O) " << aCnt << endl
        << "count of (u|U) " << aCnt << endl;
    return 0;
}