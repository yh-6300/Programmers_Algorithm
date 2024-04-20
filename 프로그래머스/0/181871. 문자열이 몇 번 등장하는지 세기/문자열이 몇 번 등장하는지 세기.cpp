#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    for(int i=0;i<myString.length()-pat.length()+1;i++){
        string s = myString.substr(i, pat.length());
        //cout << s << endl;
        if(s.compare(pat) == 0){
            answer++;
        }
    }
    
    return answer;
}