#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    
    string a = "";
    for(int i=0;i<myString.length();i++){
        if(myString[i] == 'x' && a != ""){
            answer.push_back(a);
            a = "";
        }
        else if(myString[i] != 'x'){
            a += myString[i];
        }
    }
    if(a!="")
        answer.push_back(a);
    
    sort(answer.begin(),answer.end());
    
    return answer;
}