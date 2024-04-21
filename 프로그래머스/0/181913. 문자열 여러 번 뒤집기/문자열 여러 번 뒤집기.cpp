#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    
    for(int i=0;i<queries.size();i++){
        string s = "";
        for(int j=queries[i][0];j<queries[i][1] + 1;j++){
            s = my_string[j] + s;
        }
        my_string = my_string.substr(0,queries[i][0]) + s + my_string.substr(queries[i][1] + 1, my_string.length()-queries[i][1] - 1);
        //cout << my_string.substr(0,queries[i][0]) << " " << s << " " << my_string.substr(queries[i][1] + 1, my_string.length()-queries[i][1] - 1) << endl;
        //cout <<  my_string << endl;
    }
    
    return answer = my_string;
}