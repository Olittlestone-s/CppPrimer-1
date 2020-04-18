#include <iostream>

std::istream &read(std::istream &in_stream){
    std::string temp;
    while(in_stream.good())
    {
        in_stream >> temp;
        std::cout << temp << ',';
    }
    in_stream.clear();
}