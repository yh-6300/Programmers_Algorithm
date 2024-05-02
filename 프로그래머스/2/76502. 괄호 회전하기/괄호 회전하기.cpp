#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;
    int t = 0;
    
    int len = s.length();
    for (int i = 0; i < s.length(); i++) {
        stack<char> sk;
        t = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                t = 1;
                sk.push(s[i]);
            }
            else {
                if (s[i] == ')' && sk.top() == '(')
                    sk.pop();
                if (s[i] == ']' && sk.top() == '[')
                    sk.pop();
                if (s[i] == '}' && sk.top() == '{')
                    sk.pop();
            }
        }
        if (sk.empty() && t) 
            answer++;
        //s = s.substr(1,s.length()-1) + s[0];
        char ch = s.front();
        s.erase(s.begin());
        s.push_back(ch);
    }
    return answer;
}