#include <iostream>

//三个模板声明
template <unsigned Width, unsigned Height>
class Screen;

template <unsigned Width, unsigned Height>
std::istream &operator>>(std::istream &is, Screen<Width, Height> &screen);

template <unsigned Width, unsigned Height>
std::ostream &operator<<(std::ostream &os, const Screen<Width, Height> &screen);

template <unsigned Width, unsigned Height>
class Screen
{
    //友元声明
    friend std::istream &operator>><Width, Height>(std::istream &is, Screen &screen);
    friend std::ostream &operator<<<Width, Height>(std::ostream &os, const Screen &screen);

private:
    unsigned width = Width;
    unsigned height = Height;

    char ch;

public:
    Screen() = default;
};

template <unsigned Width, unsigned Height>
std::istream &operator>>(std::istream &is, Screen<Width, Height> &screen)
{
    is >> screen.ch;
    return is;
}

template <unsigned Width, unsigned Height>
std::ostream &operator<<(std::ostream &os, const Screen<Width, Height> &screen)
{
    os << screen.ch << " " << screen.width << " " << screen.height;
    return os;
}

int main()
{
    Screen<10, 10> screen;
    std::cin >> screen;
    std::cout << screen << std::endl;
    return 0;
}