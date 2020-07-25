//这里进行模拟一下括号内容处理的过程（只是模拟，没有对括号内容做处理，只是将括号内容处理的结果以#进行替换到题目中）
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    stack<char>res;
    stack<char>stk;
    string line;
    bool open;
    while(getline(cin,line)){
        for(auto c = line.begin();c != line.end();c++){
            res.push(*c);
            if(*c == '(')open = true;
            if(*c == ')' && open == true){
                while(res.top() != '(')
                    res.pop();
                res.pop();
                res.push('#');
                open = false;
            }

        }

        cout<<endl;
    }
        while(!res.empty()){
            stk.push(res.top());
            res.pop();
        }

        while(!stk.empty()){
        cout<<stk.top();
        stk.pop();
        }
    return 0;
}
