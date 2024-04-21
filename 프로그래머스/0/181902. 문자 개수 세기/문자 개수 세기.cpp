#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    map<char, int> ma;
    
    for(int i=0;i<'Z'-'A'+1;i++){
        ma.insert(make_pair('A'+i,0));
    }
    for(int i=0;i<'z'-'a'+1;i++){
        ma.insert(make_pair('a'+i,0));
    }
    
    for(int i=0;i<my_string.length();i++){
        if(ma.find(my_string[i]) == ma.end()){
            ma.insert(make_pair(my_string[i],1));
        }
        else{
            ma[my_string[i]]++;
        }
    }
    for(auto t : ma){
       // cout << t.first << " " << t.second << endl;
        answer.push_back(t.second);
    }
    
    
    
    return answer;
}