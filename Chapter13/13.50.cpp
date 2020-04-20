#include <iostream>
#include <memory>
#include <stdexcept>
#include <algorithm>
#include <iterator>
#include <cstring>
#include <vector>
using namespace std;

class String
{
private:
    char *first;
    char *post_last;

private:
    std::allocator<char> alloc;
    void alloc_n_copy(const char *begin, const char *end)
    {
        auto data = alloc.allocate(end - begin);
        post_last = std::uninitialized_copy(begin, end, data);
        first = data;
    }

    void free()
    {
        for (auto iter = post_last; iter != first;)
        {
            alloc.destroy(--iter);
        }
        alloc.deallocate(first, post_last - first);
    }

public:
    String() : first(nullptr), post_last(nullptr) {}

    String(const char *c_str)
    {
        alloc_n_copy(c_str, c_str + strlen(c_str));
    }

    String(const String &ano)
    {
        alloc_n_copy(ano.first, ano.post_last);
        std::cout << "copy constructor" << std::endl;
    }

    String(String &&ano) noexcept: first(ano.first), post_last(ano.post_last)
    {
        cout << "move" << endl;
        ano.first = ano.post_last = nullptr;
    }

    String & operator=(String &&ano)
    {
        cout << "move assignment" << endl;
        if(this != &ano)
        {
            free();
            first = ano.first;
            post_last = ano.post_last;
            ano.post_last = ano.first = nullptr;
        }
        return *this;
    }

    String(const std::string &ano) : String(ano.c_str())
    {
    }

    String &operator=(const String &ano)
    {
        std::cout << "copy assignment operator" << std::endl;
        if (this != &ano)
        {
            free();
            alloc_n_copy(ano.first, ano.post_last);
        }
        return *this;
    }

    ~String()
    {
        free();
    }

    char &operator[](size_t index)
    {
        return *(first + index);
    }

    char &at(size_t index)
    {
        if (first + index >= post_last)
        {
            std::string msg("index out of boundary: ");
            throw std::out_of_range(msg + std::to_string(index));
        }
        return *(first + index);
    }

    size_t size() const
    {
        return post_last - first;
    }

    size_t length() const
    {
        return size();
    }

    char *begin() const
    {
        return first;
    }

    char *end() const
    {
        return post_last;
    }
};

std::ostream &operator<<(std::ostream &out, const String &str)
{
    std::for_each(str.begin(), str.end(), [&out](char ch) {
        out << ch;
    });
    return out;
}

int main()
{
    vector<String> vs;
    vs.reserve(10);
    String s1("string1");
    String s2(s1); //copy
    String s3 = s2;//copy
    s3 = s2; //copy assignment
    vs.push_back(std::move(s1)); //move
    vs.push_back(std::move(s2)); //move
    vs.push_back("string3"); //move
    return 0;
}