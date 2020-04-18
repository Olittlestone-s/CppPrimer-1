#include <string>
#include <iostream>

using namespace std;

char *concatenate(const string &str1, const string &str2)
{
    char *res = new char[str1.length() + str2.length() + 1];
    size_t index = 0;
    for (char ch : str1)
        res[index++] = ch;
    for (char ch : str2)
        res[index++] = ch;
    res[index] = '\0';
    return res;
}

char *concatenate(const char *p_str1, const char *p_str2)
{
    auto p_str_len = [](const char *pstr) -> size_t {
        size_t length = 0;
        while (pstr[length] != '\0')
            ++length;
        return length;
    };

    char *res = new char[p_str_len(p_str1) + p_str_len(p_str2) + 1];
    size_t index = 0;
    auto copy = [&index, &res](const char *pstr) -> void {
        for (size_t i = 0; pstr[i] != '\0'; ++i)
        {
            res[index++] = pstr[i];
        }
    };
    copy(p_str1);
    copy(p_str2);
    res[index] = '\0';
    return res;
}

int main()
{
    char *res = concatenate("string1 ", "string2 ");
    cout << res << endl;
    delete[] res;
    return 0;
}