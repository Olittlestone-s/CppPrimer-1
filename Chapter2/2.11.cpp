/*
(a) extern int ix = 1024; 声明 + 定义初始化
(b) int iy; 定义（隐式声明）未初始化
(c) extern int iz; 声明，iz在其他文件中定义，在本文件声明一次
*/
extern int ix = 1024;
int iy; //有默认值的全局变量
extern int iz; // 声明，在其他文件中定义的变量