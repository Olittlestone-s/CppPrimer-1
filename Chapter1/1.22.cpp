#include <iostream>
#include "Sales_item.h"

/*
input:
0-201-88954-4 5 12.00 
0-201-88954-4 3 15.00 
0-201-88954-4 1 20.00 
0-201-88954-4 10 10.00 
*/

int main(){
    Sales_item sumItem;
    if(std::cin >> sumItem){
        Sales_item input;
        while(std::cin >> input){
            sumItem += input;
        }
        std::cout << sumItem << std::endl;
    }
    return 0;
}

/*
output:
0-201-88954-4 19 225 11.8421
*/