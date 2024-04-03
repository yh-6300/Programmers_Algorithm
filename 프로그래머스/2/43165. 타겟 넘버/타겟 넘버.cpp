#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
int answer = 0;

int DFS(vector<int> numbers, int target, int now, int cal, int sum)
{
    if(now == numbers.size()){
        if(sum == target){
            answer++;
        }
        return 1;
    }
    else{
        if(cal == 0){
            sum += numbers[now];
        }
        else{
            sum += numbers[now]*(-1);
        }
        DFS(numbers, target, now+1, 0, sum);
        DFS(numbers, target, now+1, 1, sum);
    }
    return 0;
}

int solution(vector<int> numbers, int target) {
    
    //덧셈
    DFS(numbers, target, 0, 0, 0);
    //뺄셈
    DFS(numbers, target, 0, 1, 0);
    
    return answer/2;
}