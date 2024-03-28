#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    //접두어인 경우가 있으면 false
    
    // 1. 이전 문자열이 접두어인지 확인하기 위해 순서대로 정렬
    sort(phone_book.begin(),phone_book.end());
    
    // 2. 이전 문자열이 다음 문자열의 접두어이면 false로 변경
    for(int i=0;i<phone_book.size()-1;i++){
        if(phone_book[i] == phone_book[i+1].substr(0,phone_book[i].size())){
            answer = false;
        }
    }
    
    return answer;
}