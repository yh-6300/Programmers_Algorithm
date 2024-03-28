#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    
    // 1. 장르 별 재생곡 수 정리 && 2. 장르 별 곡 내림차순 정리
    // genres : plays로 모으기, genres : plays : music_number 로 모으기
    map<string, int> genre_song;
    map<string, map<int, int>> music_num;
    for(int i=0;i<genres.size();i++){
        genre_song[genres[i]] += plays[i]; // classic = 500 + 150 + 800
        music_num[genres[i]][i] = plays[i]; // pop = 600 + 2500
    }
    
    while(!genre_song.empty()){
        // 2. 재생곡 수 가장 많은 장르 찾기
        int max = 0;
        string max_song;
        for(auto idx : genre_song){
            if(idx.second > max){
                max_song = idx.first;
                max = idx.second;
            }
        }
        genre_song.erase(max_song);
        //cout << max_song << endl;
        
        //3. 최대 2개의 많이 재생된 노래 담기
        for(int i=0;i<2;i++){
            int val = 0, ind = -1;
            //노래중에서 제일높은것 찾기
            for (auto ml : music_num[max_song]) {
                if (val < ml.second) {
                    val = ml.second;
                    ind = ml.first;
                }
            }
            //만약 노래가 0~1곡밖에없다면 반복문 탈출
            if (ind == -1)    break;
            //리턴할 리스트에 노래번호 추가
            answer.push_back(ind);
            music_num[max_song].erase(ind);
        }
    }
    

    return answer;
}