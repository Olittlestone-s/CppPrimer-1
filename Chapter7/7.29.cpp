
#include <string>
#include <iostream>

class Screen
{
public:
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
    Screen set(char ch) { content[cursor] = ch; return *this;}
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

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";
    return 0;
}