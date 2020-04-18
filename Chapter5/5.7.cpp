/*
a) 没有错误
b) if语句中只能包含一条语句，如果有多条，应该使用block
if(ival < minVal){
    minval = ival;
    occurs = 1;
}
c）if语句中定义的变量，只在该语句内可见，
int val;
if(val = get_value())
    cout << "ival = " << ival << endl;
if(!val)
    cout << "ival = 0\n";

d)
if(int ival = 0)
    ival = get_value();
*/