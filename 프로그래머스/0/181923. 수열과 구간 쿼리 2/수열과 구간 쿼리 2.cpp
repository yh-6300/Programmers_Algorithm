#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(int i=0;i<queries.size();i++){
        int min = 1000000;
        for(int j= queries[i][0];j<=queries[i][1];j++){
            if(arr[j] > queries[i][2]){
                if(min > arr[j]){
                    min = arr[j];
                }
            }
        }
        if(min != 1000000)
            answer.push_back(min);
        else{
            answer.push_back(-1);
        }
    }
    
    return answer;
}