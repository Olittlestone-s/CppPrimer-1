#include <iostream>
#include "Sales_item.h"

/*
为该程序的可执行文件指定重定向的标准输入流为"book_sales"文件
*/

int main(){
    Sales_item item;
    while(std::cin >> item){
        std::cout << item << std::endl;
    }
    return 0;
}