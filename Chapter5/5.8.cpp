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
*/