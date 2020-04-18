#include <list>
#include <algorithm>
#include <string>

using namespace std;

void elimDups(list<string> lst)
{
    lst.sort();
    lst.unique();
}