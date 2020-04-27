#include <random>
#include <climits>
#include <iostream>

unsigned uniform_randint(unsigned seed = 0)
{
    static std::default_random_engine engine(seed);
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