#include <forward_list>
#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::forward_list;
using std::string;

void insert(forward_list<string> &lst, const string &target, const string &str)
{
    auto prev = lst.before_begin();
    auto curr = lst.cbegin();
    while (curr != lst.cend() && curr != lst.cend() && *curr != target)
    {
        ++curr;
        ++prev;
    }
    lst.insert_after(prev, str);
}

int main()
{
    forward_list<string> lst{"a", "b", "c"};
    insert(lst, "a", "1");
    insert(lst, "b", "2");
    insert(lst, "z", "3");
    for(auto &str : lst){
        cout << str << "->";
    }
    cout << "\b\b  " << endl;
    return 0;
}