#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string s = to_string(a);
    s += to_string(b);
    
    answer = max(stoi(s),2*a*b);
    
    return answer;
}