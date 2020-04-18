#include <iostream>
#include <string>
#include <vector>

int sum(std::vector<int> &vec){
    int ans = 0;
    for(int num : vec)
    {
        ans += num;
    }
    return ans;
}

double sum(std::vector<std::string> &str_nums)
{
    double ans = 0;
    for(std::string & str_num : str_nums){
        ans += std::stod(str_num);
    }
    return ans;
}

int main(){
    return 0;
}