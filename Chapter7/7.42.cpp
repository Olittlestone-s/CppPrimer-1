
class Date{
public:
    Date(unsigned year, unsigned month, unsigned day):
    year(year),
    month(month),
    day(day){}

    Date(): Date(2000, 1, 1){} //委托三参构造

private:
    unsigned year;
    unsigned month;
    unsigned day;
};