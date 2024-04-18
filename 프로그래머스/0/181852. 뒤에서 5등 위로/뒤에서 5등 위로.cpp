#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    sort(num_list.begin(), num_list.end(),greater<>());
    num_list.pop_back();
    num_list.pop_back();
    num_list.pop_back();
    num_list.pop_back();
    num_list.pop_back();
    sort(num_list.begin(), num_list.end());
    
    vector<int> answer = num_list;
    
    return answer;
}