/*
将`j/i`的结果转为double
这是不必要的，int转double不会发生精度丢失，可以由编译期隐式完成
这里的意图应该是 static_cast<double>(j) / static_cast<double>(i)
*/