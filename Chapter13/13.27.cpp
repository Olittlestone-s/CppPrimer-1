#include <iostream>
#include <string>

using namespace std;

class HasPtr
{
private:
    size_t *use;

private:
    int i;
    string *ps;

private:
    void do_delete()
    {
        delete ps;
        delete use;
    }
    void incUse() { ++*use; };
    void decUse()
    {
        if (--*use == 0)
        {
            do_delete();
        }
    }

public:
    HasPtr(const string &s = string()) : ps(new string(s)), i(0), use(new size_t(1)) {}
    HasPtr(const HasPtr &ano) : ps(ano.ps), i(ano.i), use(ano.use)
    {
        incUse();
    }
    HasPtr &operator=(const HasPtr &ano)
    {
        if (this != &ano)
        {
            decUse();
            ps = ano.ps;
            i = ano.i;
            use = ano.use;
            incUse();
        }
        return *this;
    }
};

int main()
{

    return 0;
}