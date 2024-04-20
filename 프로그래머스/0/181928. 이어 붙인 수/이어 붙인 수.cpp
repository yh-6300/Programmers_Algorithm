#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    string a="", b="";
    for(int i = 0;i<num_list.size();i++){
        if(num_list[i]%2==0){
            b += num_list[i] + '0';
        }
        else{
            a += num_list[i] + '0';
        }
    }    
    
    return stoi(a) + stoi(b);
}