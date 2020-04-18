/*
r1 = v2; 非法，v2是top-level const，r1没有top-level const，因此r1不能绑定到v2
p1 = p2; p2是top-level const，将p2复制给p1，p2的top-level const被忽略
p2 = p1; 非法，p2是top-level const，因此p2不可被修改
p1 = p3; 非法，p3同时具有top-level const和low-level const，而p1缺少low-level const，因此p3无法赋值给p1
p2 = pe; p2和p3都具有low-level const，p3的top-level const在复制时被忽略
*/