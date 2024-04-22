#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> v;
    while(1){
        if(n/10 == 0){
            v.push_back(n%10);
            break;
        }
        else{
            v.push_back(n%10);
        }
        n = n/10;
    }
    sort(v.begin(),v.end());
    
    int t = v.size();
    for(int i=0;i<t;i++){
        answer += v.back();
        v.pop_back();
        if(i != t-1){
            answer *= 10;
        }
    }
    
    
    return answer;
}