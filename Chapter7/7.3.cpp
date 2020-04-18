#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    double price;

    std::string isbn() const {return bookNo;}
    Sales_data &combine(const Sales_data &rhs);
};

Sales_data &Sales_data::combine(const Sales_data &rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    price = revenue / units_sold;
    return *this;
}

int main()
{
    Sales_data total;
    if (cin >> total.bookNo >> total.units_sold >> total.price)
    {
        total.revenue = total.units_sold * total.price;
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.price)
        {
            trans.revenue = trans.units_sold * trans.price;
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                cout << total.isbn() << " " << total.units_sold << " " << total.revenue << " "
                     << total.price << endl;
                total = trans;
            }
        }
        cout << total.isbn() << " " << total.units_sold << " " << total.revenue << " "
             << total.price << endl;
    }
    return 0;
}