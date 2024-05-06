#include <string>
#include <vector>

using namespace std;

int solution(int num2) {
    long long answer = 0;
    
    long long num = num2;
    
    if( num == 1 )
        return answer;
    
    int i=0;
    while(i < 500){
        i++;
        if(num %2 == 0){
            num /= 2;
        }
        else{
            num = num*3 + 1;
        }
        if(num == 1){
            return i;
        }
    }
    
    
    return -1;
}