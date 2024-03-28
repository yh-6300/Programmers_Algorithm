#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    // 각각 필요한 날짜 계산하기
    vector<int> timev;
    for(int i=0;i<progresses.size();i++){
        timev.push_back((100-progresses[i])/speeds[i]);
        if((100-progresses[i])%speeds[i] != 0){
            timev[i]++;
        }
    }
    
    int max = timev[0];
    int cnt = 1;
    for(int i=1;i<timev.size();i++){
        if(timev[i] > max){
            max = timev[i];
            answer.push_back(cnt);
            cnt = 1;
        }
        else{
            cnt++;
        }
    }
    answer.push_back(cnt);

    
    
    
    return answer;
}