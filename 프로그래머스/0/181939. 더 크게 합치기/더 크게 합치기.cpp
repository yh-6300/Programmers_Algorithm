#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string s = to_string(a) + to_string(b);
    string s2 = to_string(b) + to_string(a);
    answer = max(stoi(s),stoi(s2));
    
    return answer;
}