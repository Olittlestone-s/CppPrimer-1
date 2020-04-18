#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <set>
#include <iomanip>

using namespace std;

unordered_map<char, string> WEEKS{
    {'A', "MON"},
    {'B', "TUS"},
    {'C', "WED"},
    {'D', "THU"},
    {'E', "FRI"},
    {'F', "SAT"},
    {'G', "SUN"},
};

unordered_map<char, string> HOURS;
void init_hours()
{
    for (int i = 0; i < 10; ++i)
    {
        HOURS[i + '0'] = to_string(i);
    }
    for (int i = 10; i < 24; ++i)
    {
        HOURS[i + 'A' - 10] = to_string(i);
    }
}

pair<int, char> find(const string &s1,
                     const string &s2,
                     unordered_map<char, string> range = {},
                     string::size_type start = 0)
{
    while (start < s1.length() && start < s2.length())
    {
        if (s1[start] == s2[start])
        {
            if ((range.size() > 0 && range.count(s1[start]) != 0) ||
                range.size() == 0)
            {
                return make_pair(start, s1[start]);
            }
        }
        ++start;
    }
    return make_pair(-1, '\0');
}

int main()
{
    init_hours();
    string s1, s2;
    cin >> s1 >> s2;
    pair<int, char> week_info = find(s1, s2, WEEKS);
    pair<int, char> hour_info = find(s1, s2, HOURS, week_info.first + 1);
    cin >> s1 >> s2;
    pair<int, char> minute_info = find(s1, s2);
    while (!isalpha(minute_info.second))
    {
        minute_info = find(s1, s2, {}, minute_info.first + 1);
    }
    cout.setf(ios::right);
    cout << WEEKS[week_info.second] << ' '
         << setw(2) << setfill('0') << HOURS[hour_info.second] << ':'
         << setw(2) << setfill('0') << minute_info.first
         << endl;
    return 0;
}