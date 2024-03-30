#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> citations) {
    // 0 1 3 5 6 
    // 5 4 3 2 1
    sort(citations.begin(),citations.end());
    int answer = 0;
    for(int i=0;i<citations.size();i++){
        if(citations[i] >= citations.size()-i){
            answer = citations.size()-i;
            //cout << citations.size()-i << "\n";
            break;
        }
    }
    return answer;
}