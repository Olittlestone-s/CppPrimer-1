/*
v2是top-level const，v2的副本被赋值给v1，赋值时，top-level const被忽略
p1既没有top-level const，也没有low-level const；r1是top-level const的
p2是top-level const，p3既是top-level const，也是low-level const，r2是top-level const
*/