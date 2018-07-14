/*
JadenCase란 모든 단어의 첫 알파벳이 대문자이고, 그 외의 알파벳은 소문자인 문자열입니다. 
문자열 s가 주어졌을 때, s를 JadenCase로 바꾼 문자열을 리턴하는 함수, solution을 완성해주세요.
*/

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<string> split;
    while(1){
        int pos = s.find(" ");
        if(pos == -1){
            split.push_back(s); break;
        }
        split.push_back(s.substr(0, pos+1));
        s = s.substr(pos+1);
    }
    
    for(int i = 0; i<split.size(); i++){
        transform(split[i].begin(), split[i].end(),split[i].begin(), ::tolower);
        split[i][0] = (char)toupper(split[i][0]);
        answer += split[i];
    }
    return answer;
}
