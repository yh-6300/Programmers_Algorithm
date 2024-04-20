#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    string s = "";
    for(int i=0;i<my_string.length();i++){
        s = my_string[my_string.length()-1-i] + s;
        answer.push_back(s);
    }
    
    sort(answer.begin(),answer.end());
    
    return answer;
}