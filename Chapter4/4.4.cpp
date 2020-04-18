#include <iostream>

using std::cout;
using std::endl;

int main(){
    double res = ((((12 / 3) * 4) + (5 * 15)) + ((24 % 4) / 2)); //16 + 75 + 0 = 91
    std::cout << res << endl; // 91
    std::cout << (12 / 3 * 4 + 5 * 15 + 24 % 4 / 2) << endl; // 91
    return 0;
}

/*
Note:
`%`运算符底层在做除法，因此其优先级和`/`、`*`相同！
*/