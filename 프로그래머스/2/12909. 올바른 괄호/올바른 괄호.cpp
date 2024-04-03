#include <string>
#include <iostream>
#include <vector>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int a = 0;
    vector<int> v;
    for(int i=0;i<s.length();i++){
        if(s[i] == '('){
            v.push_back(1);
        }
        else if(s[i] == ')' && !v.empty()){
            v.pop_back();
        }
        else{
            answer = false;
            break;
        }
    }
    if(!v.empty())
        answer = false;
    
    return answer;
}