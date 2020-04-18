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
    double price = 0.0;
};

int main()
{
    Sales_data total;
    if (cin >> total.bookNo >> total.units_sold >> total.price)
    {
        total.revenue = total.price * total.units_sold;
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.price)
        {
            trans.revenue = trans.price * trans.units_sold;
            if (total.bookNo == trans.bookNo)
            {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
                total.price = total.revenue / total.units_sold;
            }
            else
            {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " "
                     << total.price << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " "
                     << total.price << endl;
    }
    return 0;
}