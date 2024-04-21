#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int ll, rr;
vector<int> answer;

void DFS(string s)
{
    if(stoi(s) <= rr){
        if(stoi(s) >= ll && stoi(s) <= rr){
            answer.push_back(stoi(s));
        }
        DFS(s+"0");
        DFS(s+"5");
    }
}

vector<int> solution(int l, int r) {
    ll = l;
    rr = r;
    
    string s = "5";
    DFS(s);
    sort(answer.begin(),answer.end());
    if(answer.empty()){
        answer.push_back(-1);
    }
    
    return answer;
}