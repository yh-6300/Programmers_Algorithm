#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    if(arr1.size() != arr2.size()){
        // 배열의 길이가 더 긴 쪽이 큼
        if(arr1.size() > arr2.size()){
            answer = 1;
        }
        else{
            answer = -1;
        }
    }
    else{
        //각 배열의 모든 원소 합 비교해서 다르면 더 큰쪽이 크고 같다면 같음
        int a=0,b=0;
        for(int i=0;i<arr1.size();i++){
            a += arr1[i];
            b += arr2[i];
        }
        if(a > b){
            answer = 1;
        }
        else if(a < b){
            answer = -1;
        }
    }
    return answer;
}