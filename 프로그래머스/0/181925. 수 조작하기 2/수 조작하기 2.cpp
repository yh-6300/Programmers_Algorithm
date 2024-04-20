#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    
    int a = numLog[0];
    for(int i=1;i<numLog.size();i++)
    {
        if(a + 1 == numLog[i]){
            answer += "w";
        }
        else if(a -1 == numLog[i]){
            answer += "s";
        }
        else if(a + 10 == numLog[i]){
            answer += "d";
        }
        else if(a - 10 == numLog[i]){
            answer += "a";
        }
        a = numLog[i];
    }    
    
    
    return answer;
}