#include <iostream>
#include <vector>
using namespace std;

struct X
{
    X()
    {
        cout << "default constructor" << endl;
    }

    X(const X &)
    {
        cout << "copy constructor" << endl;
    }

    X &operator=(const X &x)
    {
        cout << "copy assignment" << endl;
    }

    ~X()
    {
        cout << "destructor" << endl;
    }
};

int main(void)
{
    auto func = [](X &ref, X replica){
        cout << "lambda" << endl;
    };
    X *px = new X();//default
    vector<X> v;
    v.push_back(*px);//copy
    X arr[] = {*px};//copy
    func(*px, *px); //copy and destruct replica
    *px = X();//default, assignment operator and destruct临时对象
    delete px;//destructor
    return 0;
}//destruct 数组元素
 //destruct vector元素