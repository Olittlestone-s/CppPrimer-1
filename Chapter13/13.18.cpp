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

int main()
{
    Employee e;
    cout << e << endl;
    cout << Employee("name") << endl;
    cout << (*(make_shared<Employee>())) << endl;
    cout << (*(make_shared<Employee>("shared pointer"))) << endl;
    return 0;
}