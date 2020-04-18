/*
(a) i的定义是合法的，r的定义是非法的，引用必须与对象绑定，不能使用字面量初始化
const reference才能使用字面量初始化
(b) 合法的，p2是一个const pointer，必须在定义时初始化，这里使用的是i2的地址
(c) 合法的，i是一个int常量，在定义时使用字面量初始化；r是const reference，使用字面量初始化
(d) 合法的，p3是const pointer to const object，使用i2的地址初始化，p3无法指向其他对象，也不能通过p3改变i2的值
(e) 合法的，p1是pointer to const object，使用i2的地址初始化，不能通过p1改变i2的值
(f) 非法的，r2是const reference to const object，必须在定义时初始化
(g) 合法的，i2是const 对象，使用i初始化；r是const reference，与i绑定
*/