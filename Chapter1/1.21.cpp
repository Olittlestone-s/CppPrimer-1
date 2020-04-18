#include <iostream>
#include "Sales_item.h"

/*
input:
0-201-88954-4 5 12.00 
0-201-88954-4 3 15.00 
*/

int main(){
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;
    return 0;
}

/*
output:
0-201-88954-4 8 105 13.125
*/