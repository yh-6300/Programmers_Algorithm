#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


string solution(string rny_string) {
    string answer = "";
    for(int i=0;i<rny_string.length();i++){
        
        if(rny_string[i] == 'm'){
            answer += "rn";
        }
        else{
            answer += rny_string[i];
        }
    }
    
    return answer;
}