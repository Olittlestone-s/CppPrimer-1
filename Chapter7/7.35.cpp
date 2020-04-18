#include <string>
using std::string;

typedef string Type;
Type initVal();
class Exercise
{
public:
    typedef double Type;
    Type setVal(Type); //Type defined at line 9
    Type initVal(); // Type defined at line 9

private:
    int val;
};
Type Exercise::setVal(Type parm) //与类内声明不一致! 这里的Type是line 4定义的，类中声明的Type是line 9定义的！
{
    val = parm + initVal(); // initVal declared at line 11
    return val;
}

int main(){
    return 0;
}