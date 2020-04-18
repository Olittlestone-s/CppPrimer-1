* istream, ostream, iostream
* ifstream, ofstream, fstream
* istringstream, ostringstream, sstream
* IO对象不可被复制！
> * badbit：系统级、不可恢复的错误
> * failbit：如数据与期望类型不服，可恢复
> * eofbit：到达文件为将同时设置failbit和eofbit
> * goodbit：状态良好
> NOTE: badbit/failbit/eofbit三者之一被设置，就认为流状态是不可用的
> endl、flush、ends的输出都促使buffer刷新，endl增加换行符，flush不增加任何字符，ends增加空字符
* 设置即时刷新？
```c++
cout << unitbuf; //即时刷新
cout << nounitbuf; //默认刷新
```
* 进程异常结束时，buffer余留的数据不会被刷新！