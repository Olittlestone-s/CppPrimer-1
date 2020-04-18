#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){
    string buf;
    for(size_t index = 1; index < argc; ++index){
        buf += argv[index];
        buf += ", ";
    }
    cout << buf << endl;
    return 0;
}