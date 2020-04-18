#include <iostream>
#include <string>

struct Sales_data
{
    std::string bookNo; // 国际标准书号
    unsigned units_sold; //销售数量
    double revenue; //收益
};

int main(){
    Sales_data data1, data2;
    double price;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = price * data1.units_sold;
    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data1.revenue = price * data2.units_sold;
    if(data1.bookNo == data2.bookNo){
        int totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
        if(totalCnt != 0){
            std::cout << totalRevenue / totalCnt << std::endl;
        }else{
            std::cout << "(no sales)" << std::endl;
        }
    }else{
        std::cerr << "Data must refer to the smae bookNo" << std::endl;
        return -1;
    }
    return 0;
}