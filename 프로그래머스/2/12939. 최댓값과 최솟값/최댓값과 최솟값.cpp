#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    stringstream s2(s);
	string s1;
    s2 >> s1;
    int max = stoi(s1);
    int min = stoi(s1);
    while (s2>>s1) {
        if( stoi(s1) > max ){
            max = stoi(s1);
        }
        if( stoi(s1) < min ){
            min = stoi(s1);
        }
    }
    
    answer = to_string(min) + " " + to_string(max);
    return answer;
}