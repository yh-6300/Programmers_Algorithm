#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    
    while(1){
        if(n/10 != 0)
            answer.push_back(n%10);
        else{
            break;
        }
        n = n/10;
    }
    answer.push_back(n);
    
    return answer;
}