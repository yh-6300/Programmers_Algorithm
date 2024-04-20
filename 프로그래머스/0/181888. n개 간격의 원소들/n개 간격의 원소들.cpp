#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    
    answer.push_back(num_list[0]);
    
    int t = 1;
    for(int i=1;i<num_list.size();i++){
        if(t == n){
            answer.push_back(num_list[i]);
            t = 0;
        }   
        t++;
    }
    
    return answer;
}