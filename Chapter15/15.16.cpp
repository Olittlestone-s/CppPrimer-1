#include "15.15.cpp"

class Limit_quote : public Disc_quote
{
    Limit_quote() = default;
    Limit_quote(std::string book_no,
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
        if (n <= min_qty)
        {
            return n * price * (1 - discount);
        }
        else
        {
            return min_qty * price * (1 - discount) + (n - min_qty) * price;
        }
    }
};