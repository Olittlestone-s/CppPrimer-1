#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include <stdexcept>

using namespace std;

class StrBlob
{
public:
    typedef vector<string>::size_type size_type;

    StrBlob();
    explicit StrBlob(initializer_list<string> lst);

    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    void push_back(const string &new_elem);
    void pop_back();

    string &back();
    string &front();

    const string &back() const;
    const string &front() const;

private:
    shared_ptr<vector<string>> data;
    void check(const size_type index, const string &msg) const;
};

StrBlob::StrBlob() : data(make_shared<vector<string>>()) {}

StrBlob::StrBlob(initializer_list<string> lst) : data(make_shared<vector<string>>(lst)) {}

void StrBlob::push_back(const string &new_elem)
{
    data->push_back(new_elem);
}

void StrBlob::pop_back()
{
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}

string &StrBlob::back()
{
    check(0, "back on empty StrBlob");
    return data->back();
}

const string &StrBlob::back() const
{
    check(0, "back on empty StrBlob");
    return data->back();
}

string &StrBlob::front()
{
    check(0, "front on empty StrBlog");
    return data->front();
}

const string &StrBlob::front() const
{
    check(0, "front on empty StrBlog");
    return data->front();
}

void StrBlob::check(const size_type index, const string &msg) const
{
    if(index >= data->size()){
        throw out_of_range(msg);
    }
}

int main()
{
    StrBlob b1;
    {
        StrBlob b2{"a", "an", "the"};
        b1 = b2;
        b2.push_back("about");
    }
    cout << b1.size() << endl;
    return 0;
}