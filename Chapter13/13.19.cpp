#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Employee
{
    friend ostream &operator<<(ostream &out, const Employee &e);

private:
    static int counter;
    static int nextId();

private:
    int id;
    string name;

public:
    Employee(const string &name);

    Employee(const Employee &ano);
    Employee &operator=(const Employee &ano);
};

int Employee::counter = 0;

int Employee::nextId()
{
    return ++counter;
}

Employee::Employee(const string &name = string("<empty>")) : name(name), id(nextId())
{
}

ostream &operator<<(ostream &out, const Employee &e)
{
    out << e.name << "(" << e.id << ")";
    return out;
}

Employee::Employee(const Employee &ano)
{
    *this = ano;
}

Employee &Employee::operator=(const Employee &ano)
{
    name = ano.name;
    id = nextId();
    return *this;
}

int main()
{
    Employee a("a"), b("b");
    Employee c(a);
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    a = b;
    cout << a << endl;
    return 0;
}