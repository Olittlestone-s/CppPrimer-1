#include <iostream>

using std::cin;
using std::endl;
using std::endl;
using std::string;
using std::cout;

int main(){
    string last, current;
    bool repated = false;
    while(cin >> current){
        if(current == last){
            repated = true;
            break;
        }
        last = current;
    }
    if(repated == true){
        cout << "repated: " << last << endl;
    }else{
        cout << "no word was repated" << endl;
    }
    return 0;
}

/***************************************************************************************/
#include<iostream>
#include<vector>
#include<set>

using namespace std;
int main(){
    string str;
    set<string>ss;
    int size = 0;
    string curr;
    int temp = 0;
    while (cin>>curr)
    {
        ss.insert(curr);
        temp = ss.size();
        if(size != temp || curr[0]<'A'||curr[0]>'Z'){
            size = temp;
        }else{
            str = curr;
            break;
        }
        /* code */
    }
    cout<<str<<endl;
    for(auto i:ss){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
