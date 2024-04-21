#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    
    
    if(arr.size() > arr[0].size()){//행 4, 열2
        int t = arr.size();
        int k = arr[0].size();
        for(int i=0;i<t;i++){
            for(int j=0;j<t-k;j++){
                 arr[i].push_back(0);
            }
        }
    }
    else if(arr.size() < arr[0].size()){//행2 열4
        int t = arr[0].size()-arr.size();
        for(int i=0;i<t;i++){
            vector<int> tmp;
            for(int j=0;j<arr[0].size();j++){
                tmp.push_back(0);
            }
            arr.push_back(tmp);
        }
    }
    vector<vector<int>> answer=arr;
    
    return answer;
}