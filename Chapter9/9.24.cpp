#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> vec;
    //segmentation fault
    cout << vec[0] << endl; 
    cout << vec.front() << endl;
    cout << *vec.begin() << endl;
    cout << vec.at(0) << endl; //out_of_range
    return 0;
}