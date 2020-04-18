/*
int a = 3, b = 4;
decltype(a) c = a; // c是plain int
decltype(a = b) d = a; // d是reference to int
*/

int main(){
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype(a = b) d = a;
    return 0;
}