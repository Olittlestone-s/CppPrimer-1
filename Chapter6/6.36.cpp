#include <string>
using std::string;

string (&func())[10]; //返回的是 reference to array of ten strings