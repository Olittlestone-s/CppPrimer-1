#include <iostream>
#include "Sales_item.h"

/*
为该程序的可执行文件指定重定向的标准输入流为"book_sales"文件
*/

int main(){
    Sales_item curItem;
    if(std::cin >> curItem){
        int cnt = 1;
        Sales_item newItem;
        while(std::cin >> newItem){
            if(newItem.isbn() == curItem.isbn()){
                cnt += 1;
            }else{
                std::cout << "Transaction of " << curItem.isbn() << " occurs " << cnt << " times." << std::endl;
            }
            curItem = newItem;
        }
        std::cout << "Transaction of " << curItem.isbn() << " occurs " << cnt << " times." << std::endl;
    }
    return 0;
}