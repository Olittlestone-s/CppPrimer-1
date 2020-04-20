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
    StringMatcher matcher(1, 10);
    string temp;
    size_t cnt = 0;
    while(cin >> temp){
        cnt += matcher(temp) ? 1 : 0;
    }
    cout << cnt << endl;
    return 0;
}