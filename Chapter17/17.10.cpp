#include <bitset>
#include <iostream>

using std::bitset;
using std::cout;
using std::endl;

void test_bitset()
{
    bitset<32> bs1;
    for (int i : {1, 2, 3, 5, 8, 13, 21})
    {
        bs1.set(i);
    }
    bitset<32> bs2(bs1);
    cout << bs1 << endl;
    cout << bs2 << endl;
}

int main()
{
    test_bitset();
    return 0;
}