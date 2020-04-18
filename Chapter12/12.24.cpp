#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdlib>
#include <cstring>

using namespace std;

const int DEFAULT_LEN = 15;

int main()
{
    char ch;
    size_t length = DEFAULT_LEN;
    size_t index = 0;
    char *buf = new char[length];
    while (ch = getchar())
    {
        if (isblank(ch) || iscntrl(ch) || ch == EOF)
            break;
        buf[index++] = ch;
        if (index == length)
        {
            //缓冲区不够长时，创建一个更长的，将数据复制过去，销毁旧的缓冲区
            char *bigger_buf = new char[length *= 2];
            memcpy(bigger_buf, buf, length);
            delete[] buf;
            buf = bigger_buf;
            bigger_buf = nullptr;
        }
    }
    buf[index] = '\0';
    cout << buf;
    delete[] buf;
    return 0;
}