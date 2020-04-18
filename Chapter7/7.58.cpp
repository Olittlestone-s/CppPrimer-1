#include <vector>
using std::vector;

// example.h
class Example
{
public:
    //static double rate = 0.5; //只有static const data memeber才能在类内初始化！
    static double rate;
    static constexpr int vecSize = 20;
    static vector<double> vec(vecSize);
};
// example.C
// #include "example.h"
double Example::rate;
vector<double> Example::vec;

/*
搞不懂11行和16行啥意思。。。
*/