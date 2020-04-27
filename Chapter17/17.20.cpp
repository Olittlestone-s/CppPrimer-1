#include <regex>
#include <string>
#include <iostream>

using namespace std;

bool is_valid(const smatch &results)
{
    if (results[1].matched)
    {
        return results[3].matched &&
               (results[4].matched == false ||
                results[4].str() == " ");
    }
    else
    {
        return !results[3].matched &&
               results[4].str() == results[6].str();
    }
}

int main()
{
    string phone = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ]?)(\\d{4})";
    //  1      2       3     4       5       6       7
    //共七组子表达式
    regex r(phone);
    smatch results;
    string s;
    while (getline(cin, s))
    {
        for (sregex_iterator iter(s.begin(), s.end(), r), end; iter != end; ++iter)
        {
            if (is_valid(*iter))
            {
                cout << "valid: " << iter->str() << endl;
            }
            else
            {
                cout << s << "invalid: " << iter->str() << endl;
            }
        }
    }
    return 0;
}