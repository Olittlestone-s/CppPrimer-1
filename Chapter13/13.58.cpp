#include <iostream>
#include <algorithm>

using namespace std;

class Foo
{
private:
    int *first, *past_last;
    Fool(int *first = nullptr, int *past_last = nullptr) : first(first), past_last(past_last)
    {
    }

    Foo(const Foo &ano) :Foo()
    {
        size_t length = ano.past_last - ano.first;
        first = past_last = new int[length];
        copy(ano.first, ano.past_last, past_last);
    }

    Foo& operator=(const Foo &ano)
    {
        if(this != &ano)
        {

        }
        return *this;
    }
};

int main()
{

    return 0;
}