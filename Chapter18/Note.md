* 如果函数中分配了动态对象，但是函数异常退出，就会造成动态资源无法释放。因此需要进行异常处理，释放已分配的资源
* 构造函数中发生异常，对象被部分构造，也要确保已经被构造的部分被正确析构。
* 析构函数不应该抛出异常，应该主动处理发现的异常。如果"stack unwinding"是析构函数发生异常，程序就会直接终止！
* catch exception时，应该捕获引用，否则捕获的是引用的copy
* catch顺序应该是继承层次从下向上
* catch block中写空throw表明重新抛出异常
* catch parameter list中写`...`表明捕获任何类型的异常，一般作为最后一个catch
* function try block: try不仅监控function body，也监控初始化列表
```c++
class Class{
public:
    Class(parameter_list): try: initializer_list {
        //constructor body
    } catch(exc_type &e){
        //catch body
    }
};
```
* `noexcept`声明表明函数不会抛出异常，但是编译器不会检查是否真的抛出异常！
* 如果虚函数有`noexcept`声明，override version也必须有
