/*
属于类接口的 non-member function需要访问private data member，
就需要将这类函数声明为`friend`
毫无疑问，`friend`破坏了封装，其原因在于接口设计不合理
友元应该作为优先级最低的选择，优先考虑设计更合理的接口
*/