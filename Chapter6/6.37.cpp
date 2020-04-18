#include <string>
using std::string;

using stringArr = string(&)[10];
string func(); //使用using声明类型别名的

typedef string (&stringArr2)[10];
stringArr2 func2(); //使用typedef声明类型别名的

auto func3() -> int(&)[10]; // 尾缀返回类型

string strArr[10];
decltype(strArr) &func4(); //decltype

/*
最喜欢 trailing return type
*/