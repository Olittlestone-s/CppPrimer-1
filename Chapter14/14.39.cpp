#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

class StringMatcher
{
private:
    size_t lower_length;
    size_t upper_length;

public:
    StringMatcher(size_t length) : lower_length(length), upper_length(length) {}

    StringMatcher(size_t lower, size_t upper) : lower_length(lower), upper_length(upper)
    {
    }

    bool operator()(const string &str)
    {
        return lower_length <= str.length() && str.length() <= upper_length;
    }
};

int main()
{
    StringMatcher shortMatcher(1, 9);
    StringMatcher longMatcher(10, INT32_MAX);
    string temp;
    size_t shortCnt = 0, longCnt = 0;
    while (cin >> temp)
    {
        if (shortMatcher(temp))
        {
            ++shortCnt;
        }
        else if (longMatcher(temp))
        {
            ++longCnt;
        }
        else
        {
            cerr << "unexcepted string: " << temp << endl;
        }
    }
    cout << "short string: " << shortCnt << endl;
    cout << "long string: " << longCnt << endl;
    return 0;
}