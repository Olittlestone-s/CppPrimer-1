
class Account
{
public:
    static double intrestRate;

private:
    static double initRate();
};

double Account::intrestRate = initRate();

double Account::initRate()
{
    return 0.00125;
}