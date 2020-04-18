#include <iostream>
#include "Sales_item.h"

/*
executing by `1.25 < book_sales`
*/

int main(){
    Sales_item total;
    if(std::cin >> total){
        Sales_item trans;
        while(std::cin >> trans){
            if(trans.isbn() == total.isbn()){
                total += trans;
            }else{
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }else{
        std::cerr << "No data?" << std::endl;
        return -1;
    }
    return 0;
}

/*
output:
0-201-70353-X 4 99.96 24.99
0-201-82470-1 4 181.56 45.39
0-201-88954-4 16 198 12.375
0-399-82477-1 5 226.95 45.39
0-201-78345-X 5 110 22
*/