#include <string>
#include <iostream>

class Quote
{
private:
    std::string book_no;

protected:
    double price;

public:
    Quote() = default;
    Quote(const std::string &book, double sales_price) : book_no(book),
                                                         price(sales_price)
    {
    }
    std::string isbn() const { return book_no; }
    virtual double net_price(std::size_t n) const { return n * price; }
    virtual ~Quote() = default;

    virtual void debug() const
    {
        std::cout << "book_no: " << book_no << ", price: " << price << std::endl;
    }
};

std::ostream &operator<<(std::ostream &out, const Quote &quote)
{
    out << quote.isbn() << " " << quote.net_price(10);
    return out;
}