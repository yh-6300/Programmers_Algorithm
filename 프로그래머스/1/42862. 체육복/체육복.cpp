#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int arr[30];

int solution(int n, vector<int> lost, vector<int> reserve) {
    fill_n(arr, 30, 1);
    
    for(int i=0;i<reserve.size();i++){
        arr[reserve[i]] = 2;
    }
    for(int i=0;i<lost.size();i++){
        if(arr[lost[i]] == 2){
            arr[lost[i]] = 1;
        }
        else{
            arr[lost[i]] = 0;
        }
    }
    arr[0] = 0;
    int cnt = 0;
    for(int i=1;i<=n;i++){
        if(arr[i] == 0){
            if(arr[i-1]==2){
                arr[i] = 1;
                arr[i-1] = 1;
            }
            else if(arr[i+1]==2){
                arr[i] = 1;
                arr[i+1] = 1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(arr[i] >= 1){
            cnt++;
        }
    }
        
        
    
    int answer = cnt;
    return answer;
}