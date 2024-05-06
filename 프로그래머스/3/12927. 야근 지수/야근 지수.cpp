#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
    priority_queue<int> pq(works.begin(),works.end());
    
    while(n != 0){
        if(pq.top() != 0){
            int a = pq.top();
            a--;
            pq.pop();
            pq.push(a);
            n--;
        }
        else{
            return 0;
        }
    }
    
    while(!pq.empty()){
        int a = pq.top();
        answer += a*a;
        pq.pop();
    }
    
    return answer;
}