#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){
    auto beg = &argv[0];
    auto end = argv + argc;
    while(beg != end){
        cout << *beg++ << endl;
    }
    return 0;
}