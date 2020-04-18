#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

//input: 42 65 95 100 39 67 95 76 88 76 83 92 76 93

int main(){
    vector<unsigned> cnts(11, 0);
    int temp;
    while(cin >> temp){
        if(temp <= 100){
            (*(cnts.begin() + temp / 10))++;
        }
    }
    for(auto iter = cnts.begin(); iter != cnts.end(); ++iter){
        cout << *iter << ' ';
    }
    cout << endl;

    return 0;
}