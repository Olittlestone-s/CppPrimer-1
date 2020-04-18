* 控制对象的复制、赋值、移动和销毁
    * copy constructor
    * copy assignment
    * move constructor
    * move assignment
    * deconstructor
* copy和move定义如何另一个同类对象初始化新对象
* copy/move-assignment定义如何使用同类对象对当前对象赋值
* copy constructor：可以接收一个同类对象的引用的构造函数
* 合成的copy constructor可以正确复制数组
* copy constructor调用的时机
    * 实参值传递
    * 返回新对象
    * 列表初始化
* copy constructor参数必须是引用类型，否则调用copy constructor就会发生递归！
* 如果可能，编译器会绕过copy constructor，执行直接初始化，但是copy constructo必须存在！
* copy assignment operator
    * 做member function时，左操作数与this绑定，右操作数与形参绑定（一个reference to const）
    * 非member function时，需要指定两个形参（分别为左右操作数）
* 合成的copy assignment operator可以正确复制数组数据成员
* constructor在function body执行前对非静态数据成员初始化；destructor在函数体执行之后销毁非静态数据成员
* 内置指针没有析构函数，因此不会析构内置指针引用的动态对象；智能指针是类类型，因此，可以执行析构
* 发生析构的时机：
    * 自动对象离开作用域
    * 数据成员所属的对象被析构
    * 容器被销毁，容器中的元素被析构
    * 通过内置指针调用delete
    * 表达式中的临时对象在表达式结束时被析构
* 五个特殊方法是一个unit，如果其中一个需要手动定义，那么就说明5个需要全部定义！
* 拷贝构造和赋值操作符一定并存
* `=deleted`用于声明该函数不可用！不允许编译器合成！
* 将copy constructor和copy assignment operator声明（但是不定义）为private可以避免对象被复制
* 类值对象：拷贝底层数据，和原对象相互独立；类指针对象：复制指针，与原对象共享底层数据
* 如果一个对象包含动态数据，且被复制后立即被销毁，则应该使用移动操作，避免动态对象被不必要的复制！
* IO对象（不能复制），unique_ptr（不能复制）对象，使用移动语义的场景
* 新标准下，容器中的元素只要求是“可移动的”，以前的容器要求元素是可复制的（IO流对象就是是不可复制的）
* 右值引用只能与右值绑定，使用`&&`操作符获得一个右值引用，右值引用只能与将要销毁的对象绑定
* 左值引用使用对象的“标识”，右值引用使用对象的状态！
* 引用是对象的别名，指针记录的对象的地址。
* 右值引用可以绑定到表达式，不能直接绑定到左值引用！
* 左值引用只能绑定到返回引用的表达式，右值引用只能绑定到返回值的表达式
* lvalue reference to const可以绑定到返回右值的表达式
* 左值具有持久的状态，右值没有持久状态（如字面量/临时对象）
* 临时对象:
    * 将要被销毁的对象
    * 不会再被使用的对象
* 不能将右值引用绑定到一个左值，需要使用`std::move()`将左值移动，被移动过的左值不应该再做为右值使用！
* 应该显式使用`std::move`而不是`move`！
* move constructor需要使用`noexcept`修饰，在声明和定义处都必须指定
* 如果自定义了copy constructor/copy assignment，则编译器不会合成move constructor/move assignment
* 如果自定义了move constructor/move assignmente，则编译器不会合成默认的copy constructor/copy assignment
* `move`操作窃取对象状态，不申请新的动态内存，因此不应该抛出异常
* 如果类类型的对象需要放到标准库里的容器中，尽可能对`move constructor`加`noexcept`声明
* 如果容器不确定新元素的移动是安全的，就不会使用移动操作，而是使用复制操作