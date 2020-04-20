#include "15.3.cpp"

class Limit_quote : public Quote
{
private:
    std::size_t limit;
    double discount;

public:
    Limit_quote(std::string book_no,
                double price,
                std::size_t limit,
                double discount) : Quote(book_no, price),
                                   limit(limit),
                                   discount(discount)
    {
    }

    double net_price(std::size_t n) const override
    {
        if (n < limit)
        {
            return n * price * (1 - discount);
        }
        else
        {
            return limit * price * (1 - discount) + (n - limit) * price;
        }
    }
};

int main()
{
    Quote quote("isbn", 10);
    Limit_quote limit_quote("isbn", 10, 5, 0.15);
    std::cout << quote << std::endl;
    std::cout << limit_quote << std::endl;
    return 0;
}