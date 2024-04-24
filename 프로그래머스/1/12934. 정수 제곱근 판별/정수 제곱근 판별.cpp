#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    
    long long a = 1;
    while(a*a <= n){
        if(n == a*a){
            answer = (a+1)*(a+1);
            break;
        }
        else{
            a++;
        }
    }
    
    return answer;
}