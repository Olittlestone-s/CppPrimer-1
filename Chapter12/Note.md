* 全局对象在程序启动时分配空间，程序结束时销毁
* 局部、自动变量在进入该变量所属作用域并定义后被创建，所属作用域结束时销毁
* 局部静态变量在其第一次被使用时分配空间，程序结束时销毁
* static区存储局部静态变量以及类的static member
* static数据区和stack区都由编译期负责memory分配和释放
* heap区需要程序员分配和释放
* 新标准（memory头文件）中提供了两种“智能指针”：shared_ptr、unique_ptr和weak_ptr
* shared_ptr，允许多个指针指向一个对象
* unique_ptr，只允许当前指针指向对象，不共享！
* 使用make_shared<T>(args)创建动态对象，并返回指向该对象的shared_ptr<T>对象
* 如果将shared_ptr放入容器，那么在需要使用时尽快erase掉
* 使用动态内存的一个原因：需要多个对象共享相同的状态
* 动态分配的对象使用默认初始化：类类型使用默认构造函数，基本类型的默认初始化值是未定义的！
* 默认初始化、值初始化、直接初始化
* 对于类类型，默认初始化与值初始化都会调用默认构造函数
* 对于内置类型，默认初始化的值是未定义，值初始化是各种形式的“0”
* new auto的使用
```c++
/*
从obj推断出p的类型：
如果obj是一个int，则p是一个pointer to int，并且使用obj执行直接初始化
*/
auto p = new auto(obj);
```
* new分配内存失败时，抛出`bad_alloc`异常/返回nullptr，使用(nothrow)声明可以抑制该异常
* nothrow和bad_alloc都定义在头文件new中
* 函数异常结束时，其中的局部变量也会被销毁！因此，如果不进行异常处理，内置指针指向的动态存储就没有机会释放！
* 智能指针陷阱：
    1. 不使用内置指针初始化多个智能指针
    2. 不delete shared_ptr.get()的返回值
    3. 使用shared_ptr.get()的返回值初始化智能指针
    4. 如果使用智能指针管理非动态内存资源，要记得传递deleter
* weak_ptr不会增加引用计数，不能直接使用weak_ptr进行访问，只能通过lock的返回结果进行访问
* 使用new T[]创建的“动态数组”不具有数组类型，不能使用range for/begin/end
* 使用 delete [] pointer_to_dynamic_array时，销毁是逆序发生的
* 使用unique_ptr管理动态数组，需要在泛型参数中指明 unique_ptr<T[]>，此时，可以使用下边进行元素访问
* shared_ptr管理动态数组时，必须手动指定新的deleter，也不支持下标操作
* new复合了分配内存和构造对象两种操作，delete复合了解构对象和返还内存的操作
* 有时，我们不需要在分配时进行初始化，因此，需要使用allocator
* 共享指针的引用计数是线程安全的，读取对象需要加锁！

"不能将指针直接赋值给一个智能指针，一个是类，一个是指针。例如std::shared_ptr<int> p4 = new int(1);的写法是错误的"
这种写法错误的原因不是因为p4是shared_ptr对象，而"new int(1)"的结果是int*（内置指针）
而是因为，shared_ptr类的单参数constructor：shared_ptr(T *)是explict的！源码声明："explicit shared_ptr(_Yp* __p)"
如果该单参数构造函数不是explict的，这种赋值初始化实际上会使用new int(1)的得到的指针构造一个临时shared_ptr对象，并使用这个临时对象调用shared_ptr的operator=(const shared_ptr&)进行p4的初始化。
正是由于使用内置指针作为参数的单参数构造函数是explict的，因此无法隐式的构建临时对象，因而无法将内置指针对象直接赋值给shared_ptr对象！
但参数构造函数如果不声明为explict，便是定义一种从参数类型（如B）到当前类类型（如A）的隐式类型转换规则，在期望出现A类型的表达式中，如果使用B类型对象，便会使用B类型对象相应单参数作为参数，构造A类型的临时对象参与表达式的运算。