// g++ 10.33.cpp -o bin/10.33
// bin/10.33 nums.txt odds.txt evens.txt

#include <fstream>
#include <iterator>


using namespace std;
int main(int argc, char *argv[])
{
    ifstream ifile(argv[1]);
    ofstream odds_file(argv[2]);
    ofstream evens_file(argv[3]);
    istream_iterator<int> in_iter(ifile), end;
    ostream_iterator<int> odds_iter(odds_file, " ");
    ostream_iterator<int> evens_iter(evens_file, " ");
    while (in_iter != end)
    {
        if (*in_iter & 1)
        {
            odds_iter = *in_iter++;
        }
        else
        {
            evens_iter = *in_iter++;
        }
    }
    ifile.close();
    odds_file.close();
    evens_file.close();
    return 0;
}