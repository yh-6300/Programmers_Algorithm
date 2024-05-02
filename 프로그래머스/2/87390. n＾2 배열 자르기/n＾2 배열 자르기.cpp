#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    
    //vector<vector<int>> v(n, vector<int>(n,0));
    
   for(long long i = left; i <= right; ++i) {
        long long a = i / n;
        long long b = i % n;
        if(a > b){
            answer.push_back(a + 1);
        }  
        else{
            answer.push_back(b + 1);
        }
    }
    
    
    
    return answer;
}