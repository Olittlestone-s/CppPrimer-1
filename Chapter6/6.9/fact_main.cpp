#include <iostream>
#include "fact.h"

using std::cout;
using std::endl;

int main(){
    for(int i = -1; i < 4; ++i){
        cout << fact(i) << endl;
    }
}