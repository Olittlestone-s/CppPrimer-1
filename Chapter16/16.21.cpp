#include <iostream>
#include <memory>

struct DebugDelete
{
    DebugDelete(std::ostream &out) : out(out) {}

    template <typename Type>
    void operator()(Type *pointer);

private:
    std::ostream &out;
};

template <typename Type>
void DebugDelete::operator()(Type *pointer)
{
    out << "delete pointer to: " << pointer << std::endl;
    delete pointer;
}

int main()
{
    std::unique_ptr<int, DebugDelete> sp(new int(10), DebugDelete(std::cerr));
    std::unique_ptr<std::string, DebugDelete> sp2(new std::string("sdf"), DebugDelete(std::cerr));
    return 0;
}