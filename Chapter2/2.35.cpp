/*
const int i = 42; // i是一个const int object
auto j = i; // i具有top-level const，在赋值时被忽略，因此j是plain int object
const auto &k = i; //i具有top-level const，但是在赋值时被忽略，k是具有low-level const的reference to i
auto *p = &i; i具有top-level const，因此表达式&i的结果是pointer to const int，p的类型就是pointer to const int，p具有low-level const
const auto j2 = i, &k2 = i; // j2是具有top-level 的const int object, k2是const reference to i，k2具有low-level const
*/

int main(){
    const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i;
    const auto j2 = i, &k2 = i;
    return 0;
}