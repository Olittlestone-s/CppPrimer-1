#include <iostream>

int main()
{
    int curVal;
    if (std::cin >> curVal)
    {
        int cnt = 1;
        int val;
        while (std::cin >> val)
        {
            if (val == curVal)
            {
                cnt += 1;
            }
            else
            {
                std::cout << curVal << "出现" << cnt << "次" << std::endl;
                cnt = 1;
                curVal = val;
            }
        }
        std::cout << curVal << "出现" << cnt << "次" << std::endl;
    }
    return 0;
}