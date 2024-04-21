#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    
    for(int i=0;i<order.size();i++){
        if(order[i].find("americano") != string::npos){
            //cout << "1" << endl;
            answer += 4500;
        }
        else if(order[i].find("cafelatte") != string::npos){
            //cout << "2" << endl;
            answer += 5000;
        }
        else if(order[i].find("anything") != string::npos){
            //cout << "3" << endl;
            answer += 4500;
        }
    }
    
    return answer;
}