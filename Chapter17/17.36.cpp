#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << setw(30) << right;
    double sq2 = sqrt(2.0);
    cout << hexfloat << uppercase << showbase << sq2 << endl;
    cout << setw(30) << right;
    cout << scientific << sq2 << endl;
    cout << setw(30) << right;
    cout << defaultfloat << sq2 << endl;
    cout << setw(30) << right;
    cout << setprecision(10) << sq2 << endl;

    return 0;
}