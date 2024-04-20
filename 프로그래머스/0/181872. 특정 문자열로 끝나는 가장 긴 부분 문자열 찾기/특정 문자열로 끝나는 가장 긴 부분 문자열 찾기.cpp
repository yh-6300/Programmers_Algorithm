#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    int a = 0;
    for(int i=myString.length()-pat.length();i>=0;i--){
        if(myString.find(pat,i) != string::npos){
            a = myString.find(pat,i);
            return myString.substr(0,a + pat.length());
        }
    }

    
    return answer;
}