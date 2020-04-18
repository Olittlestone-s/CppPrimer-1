#include <iostream>

int main()
{
    std::cout << "/*";
    std::cout << "*/";
    //以下两句是非法的，包含了嵌套的注释标记
    // std::cout << /* "*/" */;
    // std::cout << /* "*/" /* "/*" */;
    return 0;
}