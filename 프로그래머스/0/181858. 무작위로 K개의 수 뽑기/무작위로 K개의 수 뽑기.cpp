#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    
    for(int i=0;i<arr.size();i++){
        if(find(answer.begin(), answer.end(), arr[i])==answer.end()){
            if(answer.size() < k)
                answer.push_back(arr[i]);
        }
    }
    int tmp = answer.size();
    if(tmp < k){
        for(int i=0;i<k-tmp;i++){
            answer.push_back(-1);
        }
    }
    
    return answer;
}