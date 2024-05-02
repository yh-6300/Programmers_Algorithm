#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    int cnt=0, zero=0;
    
    
    while(s != "1"){
        cnt++;
        int t=0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '1'){
                t++;
            }
            else{
                zero++;
            }
        }
        
        s = "";
        while(t > 0)
        {
            
            s += to_string(t % 2);
            t /= 2;
            //cout << s << " " << t << endl;
        }
    }
    answer.push_back(cnt);
    answer.push_back(zero);
    return answer;
}