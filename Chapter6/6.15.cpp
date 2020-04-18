/*
形参为`reference to const`，一方面向使用者表示，函数不会修改实参，
另一方面，函数只需读取s的内容，而不会对s做出任何修改
还有一点，`reference to const`可以绑定到`rvalue`和const object，而`plain reference`只能绑定到`lvalue`
因此，不使用`reference to const`将会限制函数的使用范围！

`occurs`必须是`plain reference`，因为函数内部修改了该引用所绑定对象的状态
*/