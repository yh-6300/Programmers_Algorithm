#include <string>
#include <vector>
#include <algorithm>
#define MAX 10000

using namespace std;

vector<bool> visited(MAX);
vector<vector<string>> paths;

void DFS(int idx, vector<vector<string>> &tickets, vector<string> path) {
    visited[idx] = true;
    path.push_back(tickets[idx][1]);
    
    // 주어진 항공권을 모두 사용했다면
    if (path.size() == tickets.size() + 1) {
        paths.push_back(path);
        return;
    }
    
    for (int i=0; i<tickets.size(); i++) {
    	// 사용하지 않은 항공권이고, 현재 항공권의 도착 공항과 출발 공항이 같다면
        if (!visited[i] && tickets[idx][1] == tickets[i][0]) {
            DFS(i, tickets, path);
            visited[i] = false;
        }
    }
}

vector<string> solution(vector<vector<string>> tickets) {
    for (int i=0; i<tickets.size(); i++) {
        vector<string> path;
        visited = {0, };
        
        if (tickets[i][0] == "ICN") {
            path.push_back("ICN");
            DFS(i, tickets, path);
        }
    }
    
    sort(paths.begin(), paths.end());           
    
    return paths[0];
}