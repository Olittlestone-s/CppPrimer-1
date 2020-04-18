#ifndef __SALES_DATA_H__
#define __SALES_DATA_H__

#include <string>
struct Sales_data
{
    std::string bookNo; // 国际标准书号
    unsigned units_sold; //销售数量
    double revenue; //收益
};

#endif