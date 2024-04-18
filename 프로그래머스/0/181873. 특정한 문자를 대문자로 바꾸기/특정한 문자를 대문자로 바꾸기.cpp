#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    char a = alp[0];
    string answer = my_string;
    for(int i=0;i<my_string.length();i++){
        if(a == my_string[i]){
            answer[i] = my_string[i] - 'a' + 'A';
        }
    }
    return answer;
}