/*
悬挂else
if (cond1)
    if(cond2)
        statemen1;
else
    statement2
`else`实际与内层`if`匹配，而不是外层`if`
解决方法就是增加`{}`进行明确的限定
if (cond1){
    if(cond2){
        statement1
    }
}else{
    statement2
}
c++语言是如何处理else子句的？
不同语言解决该问题的思路也是不同的，就C++而言，它规定else与离它最近的尚未匹配的if匹配，从而消除了程序的二义性。
*/
