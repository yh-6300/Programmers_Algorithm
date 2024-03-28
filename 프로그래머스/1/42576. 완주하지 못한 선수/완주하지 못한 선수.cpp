#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string,int> umap;
    
    // 1. participant 확인해서 map에 추가하기
    for(auto t : participant){
        // 1-1. 아직 umap에 없으면 추가
        if(umap.find(t) == umap.end()){ 
            umap[t] = 1;
        }
        else{
            // 1-2. 이름 두명일 경우
            umap[t]++; 
        }
    }
    
    // 2. completion에 있으면 map에서 빼기
    for(auto t : completion){
        umap[t]--;
    }
    
    // 3. 완주 못한 선수는 정답
    for(auto t : umap)
    {
        if(t.second == 1){
            answer = t.first;
        }
    }    
    return answer;
}