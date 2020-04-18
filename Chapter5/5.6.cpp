#include <iostream>

using std::cout;
using std::endl;

char grading(const int score){
    return score < 60 ? 'E' :
            score > 89 ? 'A' :
            score < 70 ? 'D' :
            score < 80 ? 'C' :
            'B';
}

int main(){
    for(int score = 50; score < 101; score += 10){
        cout << grading(score) << endl;
    }
    return 0;
}