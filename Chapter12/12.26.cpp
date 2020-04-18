#include <memory>
#include <iostream>
using namespace std;

int main(){
    allocator<string> str_alloctor;
    string *const pstrs = str_alloctor.allocate(10);
    string *iter = pstrs;
    string s;
    while(cin >> s && iter != pstrs + 10){
        str_alloctor.construct(iter++, s);
    }
    while(iter != pstrs){
        str_alloctor.destroy(--iter);
    }
    str_alloctor.deallocate(pstrs, 10);
    return 0;
}