#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int a = 0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i] == 2){
            a = i;
            break;
        }
    }
    int b = 0;
    for(int i=arr.size()-1;i>=0;i--)
    {
        if(arr[i] == 2){
            b = i;
            break;
        }
    }
    if( a == 0 && b == 0)
        answer.push_back(-1);
    else{
        for(int i=a;i<b+1;i++){
            answer.push_back(arr[i]);
        }  
    }
    
    return answer;
}