#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::clog;
using std::vector;

void print(const vector<int>::iterator beg, const vector<int>::iterator end){
    #ifndef NDEBUG
        clog << "MSG " << __FILE__ 
             << " : in function " << __func__
             << " at line " << __LINE__ << endl
             << "\tcompiled on " << __DATE__
             << " at " << __TIME__ << endl
             << "\tlength is: " << (end - beg) << endl;
    #endif
    if(beg == end)
    {
        cout << endl;
        return;
    }
    cout << *beg << ' ';
    print(beg + 1, end);
}

int main(){
    vector<int> vec{1, 2, 3, 4, 5};
    print(vec.begin(), vec.end());
    return 0;
}