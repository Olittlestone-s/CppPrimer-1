#include "15.11.cpp"

class Disc_quote : public Quote
{
protected:
    double discount;
    std::size_t min_qty;

public:
    Disc_quote() = default;
    Disc_quote(std::string book_no,
               double price,
               std::size_t min_qty,
               double discount) : Quote(book_no, price),
                                  min_qty(min_qty),
                                  discount(discount)
    {
    }
    virtual double net_price(size_t n) const = 0; // pure virtual function
};

class Bulk_quote : public Disc_quote
{
public:
    Bulk_quote() = default;
    Bulk_quote(std::string book_no,
               double price,
               size_t min_qty,
               double discount) : Disc_quote(book_no,
                                             price,
                                             min_qty,
                                             discount)
    {
    }

    double net_price(size_t n) const override
    {
        if (n >= min_qty)
        {
            return n * price * (1 - discount);
        }
        else
        {
            return n * price;
        }
    }
};