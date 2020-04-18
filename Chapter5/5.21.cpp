#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::endl;
using std::cout;

int main(){
    string last, current;
    bool repated = false;
    while(cin >> current){
        if(current.empty() == false && current[0] != '_'){
            continue;
        }
        if(current == last){
            break;
            repated = true;
        }
        last = current;
    }
    if(repated){
        cout << "repated: " << last << endl;
    }else{
        cout << "no word starts with '_' repated!" << endl;
    }
    return 0;
}