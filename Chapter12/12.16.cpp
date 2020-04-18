#include <memory>
#include <iostream>

using namespace std;

/*
看不懂的报错信息。。。
error: use of deleted function 
‘std::unique_ptr<_Tp, _Dp>::unique_ptr(const std::unique_ptr<_Tp, _Dp>&) 
[with _Tp = int; _Dp = std::default_delete<int>]’
*/

int main()
{
    std::unique_ptr<int> u_ptr(new int(10));
    std::unique_ptr<int> u_ptr2(u_ptr);
    return 0;
}