#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<int> q;
    for(int i=0;i<priorities.size();i++){
        q.push(i);
    }
    
    while(!q.empty()){
        int a = q.front();
        q.pop();
        if(priorities[a] != *max_element(priorities.begin(),priorities.end())){
            q.push(a);
        }
        else{
            if(a == location){
                answer++;
                break;
            }
            else{
                priorities[a] = 0;
                answer++;
            }
        }
    }
    
    return answer;
}