#include <set>
#include <iostream>

using namespace std;

class Sales_data
{
public:
    string isbn() const { return "1"; };
    //...其他成员声明
};

bool isbnCompare(const Sales_data &d1, const Sales_data &d2)
{
    return d1.isbn() < d2.isbn();
}

int main()
{
    multiset<Sales_data, bool (*)(const Sales_data &, const Sales_data &)> book_store(isbnCompare);
    book_store.insert(Sales_data());
    book_store.insert(Sales_data());
    book_store.insert(Sales_data());
    book_store.insert(Sales_data());
    cout << (book_store.size()) << endl;
    return 0;
}