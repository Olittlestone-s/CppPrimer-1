/*
int a = 3, b = 4;
decltype(a) c = a; // c是plain int
decltype((b)) d = a; // d是reference to int
++c; //改变了c本身
++d; //d是a的别名，实际改变了a
*/