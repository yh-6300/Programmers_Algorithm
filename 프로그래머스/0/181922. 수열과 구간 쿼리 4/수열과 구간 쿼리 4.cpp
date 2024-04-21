#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(int i=0;i<queries.size();i++){
        cout << queries[i][0] << " "  << queries[i][1] << " "  << queries[i][2] << endl; 
        for(int j=queries[i][0]; j < queries[i][1]+1; j++){
            if(j%queries[i][2]==0){
                arr[j]++;
            }
        }
    }
    
    
    return arr;
}