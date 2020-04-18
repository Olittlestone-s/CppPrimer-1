* arguments指实际参数，parameters指形式参数
* makefile的格式
```makefile
target: prerequisites
    command
```
> NOTE: **依赖直接使用空格分隔！不是逗号！**

* 参数传递：引用传递和值传递，指针也是值传递（发生了指针的复制）
* C++中应该避免使用指针，尽量使用`reference`
* 尽量使用引用传递，可以避免复制对象，且：有些对象是不能被复制的！比如 IO对象！
* 使用`top-level const`无法区分重载的函数，即，只区分`top-level const`无法实现重载！
* 尽量使用`reference to const`!
* argv[0]是可执行程序的名字，argv[argc]是0
* 新标准提供了`initializer_list`，`{}`包裹的同类列表，其内容是const的，
* initializer_list的复制是浅复制
* 不要返回局部变量的指针或引用！
* 尾返回类型，对于返回类型复杂的函数，可以将返回类型的声明放到形参列表后面
```c++
auto func(int i) -> int (*)[10];
//一个返回类型为pointer to array of ten ints
```
* main函数不能被重载
* 返回类型不能用于区分重载
* 形参的top-level const不能用于区分重载；但是low-level const可以
* `inline`只是对编译器的一种内敛建议，至于才不采用你的建议，还是由编译期决定！
* `constexpr`函数：只能有一个return；形参类型和返回类型必须是 字面量！即：必须能在编译时确定返回值
* `constexpr`函数是一种隐含的`inline`函数
* `inline`和`constexpr`函数通常**定义**在header files中
* `cassert`头文件中定义了`assert`宏，接收一个布尔表达式，如果`NDEBUG`宏没有定义，则会执行assert
* 许多编译期提供`-D NDEBUG` command line option 用于开启和关闭`NDEBUG`宏常量
* 常用与调试的宏常量：
> * `__func__`
> * `__FILE__`
> * `__LINE__`
> * `__TIME__` 编译时间
> * `__DATE__` 编译日期
* 全局变量在程序启动时创建，局部静态变量在第一次执行其定义语句时创建，他们都在程序结束时销毁