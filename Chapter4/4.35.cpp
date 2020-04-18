/*
(a) 计算'a' + 3时，'a'被类型提升为int，计算得到的结果转换为char
(b) 计算ival * 1.0时，ival提升为double，ui与中间变量相减时，ui被提升为double，赋值时double转换为float
(c) 计算ui * fval时，ui被转换为float，赋值时，float被提升为double
(d) 计算ival + fval时，ival被转换为float，+ dval时，中间变量从float提升为double
*/