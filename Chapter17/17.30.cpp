#include <random>
#include <climits>
#include <iostream>

unsigned uniform_randint(unsigned lower = 0, unsigned upper = UINT_MAX, unsigned seed = 0)
{
    static std::default_random_engine engine(seed);
    static std::uniform_int_distribution<unsigned> uniform_dist(lower, upper);
    return uniform_dist(engine);
}

int main()
{
    for(int i = 0; i<10; ++i)
    {
        std::cout << uniform_randint() << std::endl;
    }
    return 0;
}