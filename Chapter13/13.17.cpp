#include <iostream>

using namespace std;

class numbered
{
public:
    numbered() : serial_number(1) {}

    numbered(const numbered &ano)
    {
        serial_number = ano.serial_number + 1;
    }

    numbered &operator=(const numbered &ano)
    {
        if (this != &ano)
        {
            serial_number = ano.serial_number + 1;
        }
        return *this;
    }

    int number() const { return serial_number; }

private:
    size_t serial_number;
};

void f(numbered s)
{
    cout << s.number() << endl;
}

void g(const numbered &s)
{
    cout << s.number() << endl;
}

int main()
{
    numbered a, b = a, c = b;
    // f(a); f(b); f(c); //打印2 3 4
    // g(a); g(b); g(c); //打印1 2 3
    return 0;
}