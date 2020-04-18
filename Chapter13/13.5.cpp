#include <iostream>
using namespace std;
class HasPtr
{
public:
    friend ostream &operator<<(ostream &out, const HasPtr &hp);
    HasPtr(const string &s = string()) : ps(new string(s)), i(0) {}
    HasPtr(const HasPtr &ano) : ps(new string(*(ano.ps))),
                                i(ano.i) {}
    ~HasPtr()
    {
        delete ps;
    }

private:
    string *ps;
    int i;
};

ostream &operator<<(ostream &out, const HasPtr &hp)
{
    out << (hp.ps) << " -> " << (*(hp.ps)) << " : " << (hp.i);
    return out;
}

int main()
{
    HasPtr hp("string");
    HasPtr hp2 = hp;
    //hp.ps和hp2.ps是不同动态对象
    cout << hp << endl
         << hp2 << endl;
    return 0;
}