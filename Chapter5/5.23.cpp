#include <iostream>
#include <string>
#include <stdexcept>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    double dividence, dividend;
    string selection;
    cout << "输入两个数字计算他们的商：" << endl;
    while(cin >> dividence >> dividend){
        cout << dividence << " / " << dividend << " = " << (dividence / dividend) << endl;
        cout << "继续？(yes/no）：";
        cin >> selection;
        if(!cin || selection.empty() || selection[0] == 'n'){
            break;
        }
    }
    return 0;
}