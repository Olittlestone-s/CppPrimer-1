
#include <string>

class Screen
{
public:
    //声明一种新的类内类型
    using pos = std::string::size_type;

    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht),
                                     width(wd),
                                     content(ht * wd, c) {}

    char get() const { return content[cursor]; }
    char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);

private:
    pos cursor = 0; //以赋值初始化的形式提供了`in-class`初始值
    pos height = 0, width = 0;
    std::string content;
};

char Screen::get(pos ht, pos wd) const {
    return content[ht * width + wd];
}

Screen &Screen::move(pos r, pos c){
    cursor = r * width + c;
    return *this;
}