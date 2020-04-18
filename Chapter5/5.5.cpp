#include <iostream>

using std::cout;
using std::endl;

char grading(const int score){
    if(score > 89){
        return 'A';
    }else if(score < 60){
        return 'E';
    }else if(score < 70){
        return 'D';
    }else if(score < 80){
        return 'C';
    }else{
        return 'B';
    }
}

int main(){
    for(int score = 50; score < 101; score += 10){
        cout << grading(score) << endl;
    }
    return 0;
}