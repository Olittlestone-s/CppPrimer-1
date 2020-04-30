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
* 为了防止命名冲突，引入`namespace`的概念，namespace定义后不需要分号
* 每一命名空间定义一个作用域，同一空间不能有命名冲突！
* 命名空间可能是不连续的，一个namespace的定义可能是创建全新的namespace，也可能是对现有namespace扩充
* `include`预处理指令应该出现在namespace之前，否则将会使include的内容成为该namespace的一部分
* 全局作用域的name属于全局namespace，global namespace没有名字，使用`::`引用全局命名空间
* 命名空间可以嵌套，所表示的作用域也是嵌套的，遵循嵌套作用域解析name的规则
* 新标准引入`inline namespace`
* 匿名namespace中的变量具有静态生命周期，在第一次被使用时创建，程序结束销毁
* 匿名namespace限制在单个编译单元中可以不连续，但是不能跨越编译单元
* 匿名namespace用于代替global static 变量的定义
* 简化命名空间的访问：
    1. 命名空间别名：namespace alias = original_namespce_name;
    2. using声明：一次引入一个命名空间中的特定成员
    3. using指示：引入特定命名空间中的全部名字，using namespace std;，影响using指示所处的作用域
* 头文件最多在其namespace/function中使用using声明，绝不能在全局作用域中使用using指示/声明！
* using指示一般用在namespace的实现文件中
* using声明只能使用名字，因此会引入所有的函数重载版本
* 子类对象中包含父类子对象。如果一个基类被多次继承，那么便包含多个子对象。
* 为避免多次继承产生多个基类子对象，需要使用虚继承。


