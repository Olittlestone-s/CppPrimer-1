#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "--->noboolalpha<---" << endl;
    cout << noboolalpha << "true: " << true << " false: " << false << endl;
    cout << "--->boolalpha<---" << endl;
    cout << boolalpha << "true: " << true << " false: " << false << endl;
    cout << "--->showbase<---" << endl;
    cout << showbase << hex << "15(hex): " << 15 << endl;
    cout << showbase << oct << "15(oct): " << 15 << endl;
    cout << showbase << dec << "15(dec): " << 15 << endl;
    cout << "--->noshowbase<---" << endl;
    cout << noshowbase << hex << "15(hex): " << 15 << endl;
    cout << noshowbase << oct << "15(oct): " << 15 << endl;
    cout << noshowbase << dec << "15(dec): " << 15 << endl;
    cout << "--->showpoint<---" << endl;
    cout << showpoint << "1.235: " << 1.235 << endl;
    cout << "--->noshowpoint<---" << endl;
    cout << noshowpoint << "1.235: " << 1.235 << endl;
    cout << "--->showpos<---" << endl;
    cout << showpos << "1: " << 1 << endl; 
    cout << "--->noshowpos<---" << endl;
    cout << noshowpos << "1: " << 1 << endl; 
    cout << "--->showbase uppercase<---" << endl;
    cout << showbase << uppercase << hex << "15(hex): " << 15 << noshowbase << dec << endl;
    cout << "--->setw(10) left<---" << endl;
    cout << setw(10) << left << "10" << endl;
    cout << "--->setw(10) right<---" << endl;
    cout << setw(10) << right << "10" << endl;
    cout << "--->setw(10) internal showpos<---" << endl;
    cout << setw(10) << internal << showpos << right  << 10 << endl;
    cout << "--->fixed<---" << endl;
    cout << fixed << 123423.23423 << endl;
    cout << "--->scientific<---" << endl;
    cout << scientific << 123423.23423 << endl;
    cout << "--->hexfloat<---" << endl;
    cout << hexfloat << 123423.23423 << endl;
    cout << "--->defaultfloat<---" << endl;
    cout << defaultfloat << 123423.23423 << endl;
    return 0;
}