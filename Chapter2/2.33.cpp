/*
a = 42; // a是独立的int object，可以赋值
b = 42; // ci是有top-level的int object，将ci赋值给b将忽略top-level const，因此b是int object，可以赋值
c = 42; // cr是具有low-level的int reference，将cr赋值给c，实际上是将ci的值赋值给c，因此c是int object，可以赋值
d = 42; // &i表达式的结果是pointer to int，因此推断d的类型是pointer to int，将int对象赋值给pointer to int是不允许的
e = 42; // ci是具有low-level const的常量，因此&ci表达式的类型是 pointer to const int object，因此e不能被赋值，更不能用int object赋值
g = 42; // g与ci绑定，ci具有low-level const，g是具有low-level const的reference，因此不能对g赋值
*/