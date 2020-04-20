#include "15.3.cpp"

class Bulk_quote : public Quote
{
private:
    std::size_t min_qty;
    double discount;

public:
    Bulk_quote(std::string book_no,
               double price,
               std::size_t min_qty,
               double discount) : Quote(book_no, price),
                                  min_qty(min_qty),
                                  discount(discount)
    {
    }

    double net_price(std::size_t n) const override
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