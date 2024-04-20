#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    int tmp = n;
    answer.push_back(tmp);
    while(tmp != 1){
        if(tmp % 2 == 0)
            tmp = tmp/2;
        else
            tmp = tmp*3 + 1;
        answer.push_back(tmp);
    }
    
    return answer;
}