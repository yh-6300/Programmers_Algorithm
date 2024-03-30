#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(string a, string b) {
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    vector<string> s;
    
    // 문자열 s로 변환하기
    for(int i=0; i<numbers.size();i++){
        s.push_back(to_string(numbers[i]));
    }
    
    string answer = "";
    sort(s.begin(), s.end(), cmp);
    if (s.at(0) == "0")        
        return "0";
    
    for (auto num : s)
        answer += num;
       
    return answer;
}