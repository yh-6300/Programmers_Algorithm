#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    map<int,int> maps;
    
    for(auto t : nums){
        maps[t]++;
    }
    
    answer = min(maps.size(),nums.size()/2);
    
    return answer;
}