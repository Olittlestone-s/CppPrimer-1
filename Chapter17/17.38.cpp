#include <iostream>
#include <cstring>

int main()
{
    char *sink = new char[100];
    while(std::cin.getline(sink, 100, ' '))
    {
        if(strlen(sink) && sink[0] != '\n')
            std::cout << sink << std::endl;
    }

    return 0;
}