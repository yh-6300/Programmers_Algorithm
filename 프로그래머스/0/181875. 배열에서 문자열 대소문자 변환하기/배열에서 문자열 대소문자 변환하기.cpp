#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer = strArr;
    
    for(int i=0;i<strArr.size();i++){
        
        if(i%2==1){ //홀수번째
            for(int j=0;j<strArr[i].size();j++){
                if(strArr[i][j] <= 'z' && strArr[i][j] >= 'a'){
                    answer[i][j] = strArr[i][j] - 'a' + 'A';
                }
            }
        }
        else{
            for(int j=0;j<strArr[i].size();j++){
                if(strArr[i][j] <= 'Z' && strArr[i][j] >= 'A'){
                    answer[i][j] = strArr[i][j] - 'A' + 'a';
                }
            }
        }
    }
    
    return answer;
}