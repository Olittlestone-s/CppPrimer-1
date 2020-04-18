#include <initializer_list>
using std::initializer_list;

int sum(initializer_list<int> nums){
    int ans = 0;
    for(auto num : nums){
        ans += num;
    }
    return ans;
}