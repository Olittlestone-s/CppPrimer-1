#include "15.5.cpp"
#include <iostream>

int main()
{
    Quote quote("isbn", 10);
    Bulk_quote bulk_quote("isbn", 10, 5, 0.15);
    std::cout << quote << std::endl;
    std::cout << bulk_quote << std::endl;
    return 0;
}