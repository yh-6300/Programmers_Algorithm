#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = myString;
    for(int i=0;i<myString.length();i++){
        if(myString[i] >= 'a' && myString[i] <= 'z'){
            answer[i] = myString[i] - 'a' + 'A';
        }
    }
    return answer;
}