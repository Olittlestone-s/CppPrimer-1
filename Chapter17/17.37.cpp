#include <iostream>

int main()
{
    char *sink = new char[100];
    while(std::cin.getline(sink, 100, '\n'))
    {
        // sink[99] = 0;
        std::cout << sink << std::endl;
    }

    return 0;
}