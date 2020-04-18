/*
类中任何地方都不可以使用该类型，只能在类外使用
*/

class A{
    // error
    // A::TypeInClass f(){};

public:
    using TypeInClass = int;
};

A::TypeInClass a;