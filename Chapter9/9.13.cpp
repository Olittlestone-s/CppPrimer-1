#include <vector>
#include <list>

int main(){
    std::vector<int> ivec{1,2,3};
    std::list<int> ilst{1, 2, 3};
    // 使用容器初始化，容器类型匹配，但是元素类型不匹配
    // std::vector<double> dvec(ivec);
    
    // 使用容器初始化，容器类型不匹配
    // std::vector<double> dvec(ilst);

    // 使用迭代器初始化，元素类型可转换（int -> double）
    std::vector<double> dvec(ivec.begin(), ivec.end());

    // 使用迭代器初始化，元素类型可转换（int -> double)
    std::vector<double> dvec2(ilst.begin(), ilst.end());
}