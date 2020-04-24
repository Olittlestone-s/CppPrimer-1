#include <regex>
#include <iostream>

using namespace std;

int main()
{
    /*
    terminate called after throwing an instance of 'std::regex_error'
    what():  Unexpected character in bracket expression.
    */
    regex r("[[:alpha:]]*[^c]ei[[:alpha:]*");
    return 0;
}