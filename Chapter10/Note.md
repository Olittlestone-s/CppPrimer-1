* 泛型算法不会改变容器大小，泛型算法使用的都是迭代器，只能对元素重排/读取，不能改变元素数目
* 只读泛型算法应该使用cbegin/cend()
* 使用back_inserter获得一个与容器绑定的iterator，每对*iter赋值，将插入新的元素至容器尾部
* unique只能作用于已排序的容器
* unique不会移除容器中的元素（移除元素会改变容器的size），只会最后一个唯一元素的后一个位置的迭代器
* sort/stable_sort
* 可调用对象包括：函数，函数指针，重载了`operator()`的类的实例，lambda 表达式
* lambda可以被认为是匿名的、内联的函数，`[capture list] (params) -> return_type {body}`
* lambda要使用local-nonstatic-var，必须在capture list中声明
* 传递lambda，编译器为该lambda创建匿名类，并向目标函数传递匿名类的对象，捕获列表就是对匿名类数据成员的声明与初始化
* 捕获列表中的值在创建时初始化，而不是在调用时
* 引用捕获需要确保，lambda被调用时，所引用的对象仍旧存在
* 隐式捕获`[=]`值捕获，`[&]`引用捕获
* lambda body中如果使用了不止一条return，则无法正确推断出返回类型，应该总是显式写出return type
* STL提供bind为函数提供默认值，类似于Python中的partial


本章涉及到的泛型算法
* find, find_if, rfind, rfind_if
* accumulate
* fill, fill_n
* back_inserter, front_inserter, inserter
* copy
* replace, replace_copy, replace_if, replace_copy_if
* sort, stable_sort, partition, stable_partition
* unique
* transform
* bind以及placeholder
* i/ostream_iterator