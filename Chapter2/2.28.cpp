/*
(a) 非法，cp是const pointer，必须在定义时初始化
(b) 非法，p2是const pointer，必须在定义时初始化
(c) 非法，ic是const int object，必须在定义时初始化
(d) 非法，p3是const pointer to const object，必须在定义时初始化
(e) 合法，p是pointer to const object，可以不用初始化
*/