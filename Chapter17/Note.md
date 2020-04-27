* C++中正则表达式在运行时编译，不是在编译时编译
* 正则表达式编译是耗时操作，不应该在循环中编译！
* C语言中的`rand()`函数存在问题：
    1. 伪随机
    2. 范围有限
    3. 只能是整数
    4. 均匀分布
* 引擎和`rand()`一样，但是分布可以使用引擎做随机整数到其他随即类型的映射
* 格式控制符：
    1. boolalpha, noboolalpha
    2. uppercase, showbase, noshowbase, hex, oct, dec