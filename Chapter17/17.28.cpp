#include <random>
#include <climits>
#include <iostream>

unsigned uniform_randint()
{
    static std::default_random_engine engine;
    return engine();
}

int main()
{
    for(int i = 0; i<10; ++i)
    {
        std::cout << uniform_randint() << std::endl;
    }
    return 0;
}