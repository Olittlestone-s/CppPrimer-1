#include <sstream>
#include <string>
#include <iostream>

using std::istringstream;
using std::string;
using std::cout;
using std::endl;

int main(){
    int val;
    istringstream is("13");
    is >> val;
    cout << "从istringstream读入了：" << val << endl;
    return 0;
}