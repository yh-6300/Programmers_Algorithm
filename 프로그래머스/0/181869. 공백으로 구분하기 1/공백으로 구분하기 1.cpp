#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    stringstream ss(my_string);
    
    string s;
    while(ss >> s){
        answer.push_back(s);
    }
    
    return answer;
}