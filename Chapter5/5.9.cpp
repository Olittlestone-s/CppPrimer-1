#include<iostream>
using namespace std;
int main(){
    string str;
    while(getline(cin,str)){
        int length = str.length();
        int i = 0;
        int count = 0;
        while(i < length){
            switch (str[i])
            {
            case 'a':case 'e':case 'i':case 'o':case 'u':case 'A':case 'E':case 'I':case 'O':case 'U':
            {
                cout<<str[i];
                count ++; 
                break;
            }
            default:
            cout<<" ";
            }
            i++;
        }
        cout<<endl;
        cout<<str<<endl;
        cout<<"the element of str is:"<<count<<endl;
    }
    return 0;
}
