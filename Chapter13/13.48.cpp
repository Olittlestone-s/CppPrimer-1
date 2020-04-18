#include "13.47.cpp"
#include <vector>

using namespace std;
int main()
{
    vector<String> vs;
    vs.reserve(10);
    String s1("string1");
    String s2(s1); //copy
    String s3 = s2;//copy
    s3 = s2; //copy assignment
    vs.push_back(s1); //copy
    vs.push_back(s2); //copy
    vs.push_back(s3); //copy
    return 0;
}