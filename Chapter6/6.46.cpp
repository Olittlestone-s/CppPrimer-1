/*
不应该，constexpr函数应该返回能在编译期确定的常量
isShorter的结果依赖于其参数，因此无法在编译期确定函数的结果，所以不能声明为constexpr的
*/