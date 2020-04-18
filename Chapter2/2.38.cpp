/*
* decltype做类型推断的结果，取决于表达式的形式
int a = 1;
decltype((a)) b = a; // b是一个reference to int，而不是plain int
auto b = a; //b是一个plain int

* 对指针解引用，decltype得到的reference，而不是plain
int a = 1, *p = &a;
decltype(*p) b = a; // b是reference to int
auto b = *p; // b是plain int
*/