#include <iostream>

struct Sales_data{
    std::string bookNo;
    unsigned units_sold;
    double revenue;
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

std::istream &read(std::istream &in, Sales_data &ref){
    in >> ref.bookNo >> ref.units_sold >> ref.price;
    ref.revenue = ref.units_sold * ref.price;
    return in;
}

std::ostream &print(std::ostream &out, const Sales_data &ref2C){
    out << ref2C.bookNo << " "
        << ref2C.units_sold << ' '
        << ref2C.revenue << ' '
        << ref2C.price;
}

Sales_data add(const Sales_data &lh, const Sales_data &rh){
    Sales_data ans = lh;
    ans.combine(rh);
    return ans;
}