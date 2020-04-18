#include <iostream>

/*
显然，使用多个if更清晰，可读性更好！
*/

const char *judge(const int score)
{
    return score > 89 ? "high pass" : score < 60 ? "fail" : score < 76 ? "low pass" : "pass";
}

const char *judge2(const int score)
{
    if (score > 89)
        return "high pass";
    if (score < 60)
        return "fail";
    if (score < 76)
        return "low pass";
    return "pass";
}

int main()
{

    return 0;
}