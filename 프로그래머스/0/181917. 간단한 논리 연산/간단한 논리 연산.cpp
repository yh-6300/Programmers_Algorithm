#include <string>
#include <vector>

using namespace std;

bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool answer = false;
    
    bool a = true;
    if(x1 == false && x2 == false){
        a = false;
    }
    
    bool b = true;
    if(x3 == false && x4 == false){
        b = false;
    }
    
    if(a == true && b == true){
        answer = true;
    }
    
    return answer;
}