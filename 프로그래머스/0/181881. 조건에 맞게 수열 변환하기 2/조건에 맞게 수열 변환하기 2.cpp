#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    vector<int> arr1;
    vector<int> arr2 = arr;
    //arr2.resize(arr1.size(),0);
    int cnt = 0;
    while(arr1 != arr2){
        arr1 = arr2;
        arr2.resize(arr1.size(),0);
        for(int i=0;i<arr1.size();i++){
            if(arr1[i] >= 50 && arr1[i]%2==0){
                arr2[i] = arr1[i]/2;
            }
            else if(arr1[i] < 50 && arr1[i]%2==1){
                arr2[i] = arr1[i]*2+1;
            }
            else{
                arr2[i] = arr1[i];
            }
            //cout << arr1[i] << " " << arr2[i] << endl;
        }
        cnt++;  
    }
    
    return cnt-1;
}