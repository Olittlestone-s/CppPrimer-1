#include <string>
#include <iostream>
#include <memory>

class StringVec
{
private:
    std::allocator<std::string> alloc;

    void chk_n_alloc();

    std::pair<std::string *, std::string *> alloc_n_copy(const std::string *, const std::string *);

    void free();

    void reallocate();

private:
    std::string *elements;
    std::string *first_free;
    std::string *cap;

public:
    StringVec();
    StringVec(const StringVec &);
    StringVec &operator=(const StringVec &);
    ~StringVec();

    void push_back(const std::string &);
    size_t size() const { return first_free - elements; }
    size_t capacity() const { return cap - elements; }

    std::string *begin() const { return elements; }
    std::string *end() const { return first_free; }
};

StringVec::StringVec() : elements(nullptr), first_free(nullptr), cap(nullptr) {}
StringVec::StringVec(const StringVec &sv)
{
    auto info = alloc_n_copy(sv.begin(), sv.end());
    elements = info.first;
    first_free = cap = info.second;
}

inline void StringVec::push_back(const std::string &new_elem)
{
    chk_n_alloc();
    alloc.construct(first_free++, new_elem);
}

std::pair<std::string *, std::string *> StringVec::alloc_n_copy(const std::string *begin, const std::string *end)
{
    auto dest = alloc.allocate(std::distance(begin, end));
    return {dest, std::uninitialized_copy(begin, end, dest)};
}

void StringVec::free()
{
    if (elements)
    {
        while (first_free != elements)
        {
            alloc.destroy(--first_free);
        }
        alloc.deallocate(elements, cap - elements);
    }
}

inline StringVec::~StringVec()
{
    free();
}

StringVec &StringVec::operator=(const StringVec &r_operand)
{
    if (this != &r_operand)
    {
        auto info = alloc_n_copy(r_operand.begin(), r_operand.end());
        free();
        elements = info.first;
        first_free = cap = info.second;
    }
    return *this;
}

inline void StringVec::chk_n_alloc()
{
    if (size() == capacity())
    {
        reallocate();
    }
}

void StringVec::reallocate()
{
    size_t new_capacity = size() == 0 ? 1 : size() * 2;
    auto data = alloc.allocate(new_capacity);
    auto src = elements, dst = data;
    for (size_t index = 0; index != size(); ++index)
    {
        alloc.construct(dst, std::move(*src)); //使用移动构造
        ++dst;
        ++src;
    }
    free(); //移动后，原来位置存放的不知道是啥，反正可以destruct
    elements = data;
    first_free = dst;
    cap = elements + new_capacity;
}

std::ostream &operator<<(std::ostream &out, const StringVec &sv)
{
    size_t index = 0;
    out << '[';
    for (auto str : sv)
    {
        if (index != 0)
        {
            out << ", ";
        }
        out << str;
        ++index;
    }
    out << ']';
    return out;
}
using namespace std;

int main()
{
    StringVec sv;
    sv.push_back("name");
    StringVec sv2 = sv;
    cout << sv << endl;
    cout << sv2 << endl;
    sv2.push_back("second");
    cout << sv << endl;
    cout << sv2 << endl;

    return 0;
}