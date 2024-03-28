#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    
    // 옷과 개수를 넣을 곳, 옷은 아예 안입는 경우와 입는경우 2개를 추가하게됨
    map<string, int> map;
    
    for(int i=0;i<clothes.size();i++){
        if(map.find(clothes[i][1]) == map.end()){
            map[clothes[i][1]] = 2;
        }
        else{
            map[clothes[i][1]]++;
        }
    }
    
    int answer = 1;
    for(auto t : map){
        answer *= t.second;
    }
    
    return answer-1;
}