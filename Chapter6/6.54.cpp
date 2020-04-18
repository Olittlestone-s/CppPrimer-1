#include <vector>
using std::vector;

int f(int, int){return 0;}

int main(){
    vector<int(*)(int, int)> fvec{f};
    return 0;
}

