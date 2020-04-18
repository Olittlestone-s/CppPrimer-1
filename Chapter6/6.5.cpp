#include <iostream>
#include <climits>
#include <stdexcept>
#include <sstream>
using std::string;
using std::range_error;
using std::ostringstream;
using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int absolute(int n){
    unsigned mask = (1U << ((sizeof(int) << 3) - 1));
    if(!(mask & n)){
        //正数
        return n;
    }
    //负数
    if(n == INT_MIN){
        ostringstream msg;
        msg << INT_MIN << "没有对应的正数";
        throw range_error(msg.str());
    }
    return (~n) + 1;
}

int main(){
    cout << absolute(1) << endl;
    cout << absolute(INT_MAX) << endl;
    try{
        cout << absolute(INT_MIN) << endl;
    }catch(range_error err){
        cerr << err.what() << endl;
    }
    cout << absolute(-1) << endl;
    cout << absolute(0) << endl;
    cout << absolute(-10) << endl;
    cout << absolute(-1023) << endl;
    cout << absolute(INT_MIN + 1) << endl;
    return 0;
}