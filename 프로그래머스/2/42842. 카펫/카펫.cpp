#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int brown, int yellow) {
    int xx = 1;
    int yy = yellow;
    for(int i=1;i<=yellow/2;i++){
        if(yellow%i == 0){
            xx = i;
            yy = yellow/xx;
            if(xx*2 + yy*2 + 4 == brown)
                break;
        }
    }
    if(xx < yy){
        int tmp = xx;
        xx = yy;
        yy = tmp;
    }
    vector<int> answer;
    answer.push_back(xx+2);
    answer.push_back(yy+2);
    
    
    return answer;
}