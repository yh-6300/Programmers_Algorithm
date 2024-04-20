#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    
    stringstream s1(binomial);
    
    string a, b2, c;
    s1 >> a >> b2 >> c;
    char b = b2[0];
    
    if(b == '+'){
        answer = stoi(a) + stoi(c);
    }
    else if(b == '-'){
        answer = stoi(a) - stoi(c);
    }
    else if(b == '*'){
        answer = stoi(a) * stoi(c);
    }
    
    return answer;
}