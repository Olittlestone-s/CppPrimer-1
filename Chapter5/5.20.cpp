#include <iostream>

using std::cin;
using std::endl;
using std::endl;
using std::string;
using std::cout;

int main(){
    string last, current;
    bool repated = false;
    while(cin >> current){
        if(current == last){
            repated = true;
            break;
        }
        last = current;
    }
    if(repated == true){
        cout << "repated: " << last << endl;
    }else{
        cout << "no word was repated" << endl;
    }
    return 0;
}