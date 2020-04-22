#include <iostream>

class Base{
public:
    std::string name() const { return basename; }
    virtual void print(std::ostream &os) const { os << basename; }
private:
    std::string basename;
};

class Derived : public Base {
public:
    //存在递归调用
    void print(std::ostream &os) const {print(os); os << " " << i; }
private:
    int i;
};

int main()
{
    Derived d;
    Base &baseRef = d;
    baseRef.print(std::cout);
    return 0;
}