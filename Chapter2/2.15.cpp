/*
(a) 合法，但是不建议使用
(b) 非法，左值引用不能绑定字面量
(c) 合法
(d) 非法，左值引用必须在声明时初始化（即，绑定一个对象）
*/

int main(){
    int ival = 1.01;
    // int &rval1 = 1.01;
    int &rval2 = ival;
    // int &rval3;
    return 0;
}