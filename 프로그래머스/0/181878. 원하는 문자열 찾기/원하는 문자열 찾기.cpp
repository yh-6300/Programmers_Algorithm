#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    int j=0;
    for(int i=0;i<myString.length();i++)
    {
        char a = myString[i], b = pat[j];
        if(myString[i] >= 'a')
            a = myString[i] - 'a' + 'A';
        if(pat[j] >= 'a')
            b = pat[j] - 'a' + 'A';
        if(j == pat.length()-1)
            answer = 1;
        if(a == b){
            j++;
        }
        else
            j = 0;
    }
    return answer;
}