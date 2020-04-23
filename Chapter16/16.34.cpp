template <typename T>
int compare(const T &t1, const T &t2)
{
    return 0;
}

template int compare(const int &t1, const int &t2);
//template int compare(const char *(&t1), const char *(&t2)); //错误的模板实例定义！

compare("a", "b"); //无法进行模板类型推导