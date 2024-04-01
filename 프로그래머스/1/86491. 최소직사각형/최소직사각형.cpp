#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    for(int i=0;i<sizes.size();i++){
        sort(sizes[i].begin(),sizes[i].end());
    }
    int max = 0;
    int max2 = 0;
    for(int i=0;i<sizes.size();i++){
        if(sizes[i][0] > max) max = sizes[i][0];
        if(sizes[i][1] > max2) max2 = sizes[i][1];
    }
    
    answer = max*max2;
    
    return answer;
}