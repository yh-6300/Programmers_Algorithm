#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    map<int,int> s; 
    
    for(int i=0;i<strArr.size();i++){
        int len = strArr[i].length();
        if(s.find(len) == s.end()){
            s.insert(make_pair(len,1));
        }
        else{
            s[len]++;
        }
    }
    
    for(auto m : s){
        if (m.second > answer)
            answer = m.second;
    }
    
    return answer;
}