#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer=arr;
    
    int a = 1;
    while(arr.size() > a){
        a = a*2;
    }
    
    for(int i=arr.size();i<a;i++){
        answer.push_back(0);
    }
    
    
    return answer;
}