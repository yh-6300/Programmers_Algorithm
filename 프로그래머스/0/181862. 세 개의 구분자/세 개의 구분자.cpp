#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    
    string s = "";
    for(int i=0;i<myStr.length();i++){
        if(myStr[i] != 'a' && myStr[i] != 'b' && myStr[i] != 'c'){
            s += myStr[i];
        }
        else if (s != ""){
            answer.push_back(s);
            s = "";
        }
    }
    if(s != ""){
        answer.push_back(s);
    }
    if(answer.empty()){
        answer.push_back("EMPTY");
    }
    
    return answer;
}