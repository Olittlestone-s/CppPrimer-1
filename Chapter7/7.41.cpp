#include <string>
#include <iostream>

class Sales_data
{
public:
    //将被委托的构造函数
    Sales_data(const std::string &book_number, unsigned units_sold, double price) : bookNo(book_number),
                                                                                    units_sold(units_sold),
                                                                                    price(price),
                                                                                    revenue(units_sold * price)
    {
    }

    Sales_data() : Sales_data("", 0, 0) //委托给三参数构造函数
    {
    }

    Sales_data(const std::string &book_number) : Sales_data(book_number, 0, 0)
    {
    }

    Sales_data(std::istream &in = cin) : Sales_data()
    {
        in >> bookNo >> units_sold << price;
    }

private:
    std::string bookNo;
    double price;
    double revenue;
    unsigned units_sold;
};