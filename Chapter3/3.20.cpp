#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void report_sum_of_adjancent(){
    vector<int> vec;
    int temp;
    while(cin >> temp){
        vec.push_back(temp);
    }
    for(vector<int>::size_type index = 0; index < vec.size() - 1; ++index){
        cout << "sum of " << index << " and " << index + 1 << " is " << vec[index] + vec[index + 1] << endl;
    }
}

void report_sum_ith_and_minus_ith(){
    vector<int> vec;
    int temp;
    while(cin >> temp){
        vec.push_back(temp);
    }
    vector<int>::size_type index = 0, rindex = vec.size() - 1;
    while(index < rindex){
        cout << "sum of " << index << " and " << rindex << " is " << vec[index] + vec[rindex] << endl;
        ++index;
        --rindex;
    }
}

int main(){
    report_sum_of_adjancent();
    // report_sum_ith_and_minus_ith();
    return 0;
}