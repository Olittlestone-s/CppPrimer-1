#ifndef __PERSON_H__
#define __PERSON_H__
#include <string>
#include <iostream>
class Person{
public:
    /**
     * 以下两个成员函数都应该是const member function
     * 因为他们只读取对象的状态，不会修改，使用const限定
     * this指针，使得以下member function可以通过const object、
     * reference to const object以及pointer to const object调用
     */
    std::string name() const {return m_name;}
    std::string address() const {return m_address;}

    Person()=default;
    Person(std::istream &in);
    Person(const std::string &name, const std::string address);
private:
    std::string m_name;
    std::string m_address;
};

//7.9中增加的non-member function
std::istream &read(std::istream &in, Person &ref);
std::ostream &print(std::ostream &out, const Person &ref2C);
#endif