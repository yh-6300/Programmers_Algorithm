#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string number, int k) {
    
    int t = 0;
    int a = 0;
    string str;
    k = number.length()-k;
    for(int i=k-1;i>=0;i--){
        char max = 0;
        for(int j=t;j<number.length()-i;j++){//3, 2
            if(number[j] > max){
                //cout << number[j] << " " << t << " " << number.length()-i <<  "\n";
                max = number[j];
                t = j + 1;
            }
        }
        str += max;
        //a++;
        //cout << max-48;
    }
    //cout << str;
    
    string answer =str;
    return answer;
}