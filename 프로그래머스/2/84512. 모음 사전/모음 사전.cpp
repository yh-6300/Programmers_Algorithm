#include <string>
#include <vector>
#include <iostream>

using namespace std;
int answer, cnt;
string s = "AEIOU";
void DFS(string now, string dest){
    // 종료조건
    if(now == dest){
        answer = cnt;
        return;
    }
    cnt++;
    for(int i=0;i<s.length();i++){
        if(now.length()<5){
            DFS(now+s[i],dest);
        }
    }
}

int solution(string word) {
    DFS("",word);
    
    return answer;
}