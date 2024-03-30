#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;

    for(int i = 0; i < commands.size(); i++) {
        temp = array; 
        // vector는 '='으로 copy 가능함
        sort(temp.begin() + commands[i][0] - 1, temp.begin() + commands[i][1]); 
        // sort(시작, 종료);
        answer.push_back(temp[commands[i][0] + commands[i][2]-2]);
        // vector는 v[1] = 1;로 초기화 안됨!!!! 무조건 push_back
    }

    return answer;
}
