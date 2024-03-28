#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    
    for(int i=0;i<prices.size();i++)
    {
        int tmp = prices[i];
        int j;
        for(j=i+1;j<prices.size();j++){
            if(tmp > prices[j]){
                j++;
                break;
            }
        }
        answer.push_back(j-1-i);
    }    
    return answer;
}