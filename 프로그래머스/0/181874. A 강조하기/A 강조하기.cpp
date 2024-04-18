#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = myString;
    for(int i=0;i<myString.length();i++){
        if(myString[i] == 'a'){
            answer[i] = 'A';
        }
        else if(myString[i] > 'A' && myString[i] <= 'Z'){
            answer[i] = myString[i] - 'A' + 'a';
        }
    }
    return answer;
}