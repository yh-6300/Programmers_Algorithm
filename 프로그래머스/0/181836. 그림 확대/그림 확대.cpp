#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    
    for(int i=0;i<picture.size();i++){
        string s ="";
        for(int j=0;j<picture[i].length();j++){
            for(int kk = 0;kk<k;kk++){
                s += picture[i][j];
            }
        }
        for(int ii=0;ii<k;ii++){
            answer.push_back(s);
        }
    }
    
    
    return answer;
}