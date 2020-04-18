#include <cstring>
#include <iostream>

using std::cout;
using std::endl;

int main(){
    char str1[10] = "string1";
    char str2[10] = "string2";
    char result[20];
    strcpy(result, str1);
    strcat(result, ", ");
    strcat(result, str2);
    cout << result << endl;
    return 0;
}