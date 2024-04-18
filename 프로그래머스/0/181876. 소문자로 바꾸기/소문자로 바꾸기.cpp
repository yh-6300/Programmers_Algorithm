#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(int i=0;i<myString.length();i++){
        if(myString[i] - 'a' >= 0){
            answer += myString[i];
        } 
        else{
            answer += myString[i] - 'A' + 'a' ;
        }
    }
    return answer;
}