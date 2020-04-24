#include <iostream>

struct Bitmap
{
    unsigned bits;
    size_t size;

    Bitmap(size_t size) : size(size), bits(0U)
    {
    }

    void set(const size_t index)
    {
        chk_index(index);
        bits |= (1 << index);
    }

    void set()
    {
        bits = ~(0U);
    }

    void reset(const size_t index)
    {
        chk_index(index);
        bits &= (~(1 << index));
    }

    void reset()
    {
        bits = 0U;
    }

private:
    void chk_index(size_t index)
    {
        if (index > size)
        {
            throw std::out_of_range("index to big");
        }
    }
};

//如果包含100个，那么就不止需要一个unsigned int了！

int main()
{

    return 0;
}