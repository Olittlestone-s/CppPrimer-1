#include <iostream>

using std::cout;
using std::endl;

int func(){
    static int cnt;
    return cnt++;
}

int main(){
    for(int i = 0; i<10; ++i){
        cout << func() << ' ';
    }
    cout << endl;
    return 0;
}