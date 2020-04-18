#include <iostream>
#include <vector>

using std::vector;
using std::cin;

int main(){
    int temp;
    vector<int> nums;
    while(cin >> temp){
        nums.push_back(temp);
    }
    return 0;
}