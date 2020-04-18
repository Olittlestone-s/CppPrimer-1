#include <vector>
#include <string>
#include <iostream>

class Window_mgr
{
public:
    // 定义一种类型，用于表示Screen在窗口中的位置id
    using ScreenIndex = std::vector<Screen>::size_type;

    void clear(ScreenIndex);

private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};
};

class Screen
{
public:
    friend void Window_mgr::clear(ScreenIndex);

    //声明一种新的类内类型
    using pos = std::string::size_type;

    Screen() = default;
    // 为char增加默认值`blank`
    Screen(pos ht, pos wd, char c = ' ') : height(ht),
                                           width(wd),
                                           content(ht * wd, c) {}

    char get() const { return content[cursor]; }
    char get(pos ht, pos wd) const;
    Screen move(pos r, pos c);
    Screen set(char ch)
    {
        content[cursor] = ch;
        return *this;
    }
    Screen set(char ch, pos r, pos c);
    Screen display(std::ostream &out);
    const Screen display(std::ostream &out) const;

private:
    void do_display(std::ostream &out) const;

private:
    pos cursor = 0; //以赋值初始化的形式提供了`in-class`初始值
    pos height = 0, width = 0;
    std::string content;
};

char Screen::get(pos ht, pos wd) const
{
    return content[ht * width + wd];
}

Screen Screen::move(pos r, pos c)
{
    cursor = r * width + c;
    return *this;
}

Screen Screen::set(char ch, pos r, pos c)
{
    content[r * width + c] = ch;
    return *this;
}

Screen Screen::display(std::ostream &out)
{
    do_display(out);
    return *this;
}

const Screen Screen::display(std::ostream &out) const
{
    do_display(out);
    return *this;
}

void Screen::do_display(std::ostream &out) const
{
    out << content;
}

void Window_mgr::clear(ScreenIndex index)
{
    Screen &s = screens[index];
    s.content = std::string(s.height * s.width, ' ');
}

int main()
{
    return 0;
}