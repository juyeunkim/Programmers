/*
문자열 s에는 공백으로 구분된 숫자들이 저장되어 있습니다. str에 나타나는 숫자 중 최소값과 최대값을 찾아 이를 (최소값) (최대값)형태의 문자열을 반환하는 함수, solution을 완성하세요.
예를들어 s가 1 2 3 4라면 1 4를 리턴하고, -1 -2 -3 -4라면 -4 -1을 리턴하면 됩니다.
*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> n;
    int put = 0;
    bool plus = true;
    int max,min;
    s+=" ";
    for (int i=0; i<=s.length(); i++){
        if(s[i]==' ') {
            if(!plus) put = put *-1;
            n.push_back(put);
            put = 0; plus = true;
        }
        else if(s[i]=='-') plus = false;
        else{
            put = 10*put + (s[i]-'0');
        }
    }
    max = n[0], min = n[0];
    for(int i=0; i<n.size(); i++){
        if(max < n[i]) max = n[i];
        if(min > n[i]) min = n[i];
    }
    answer = to_string(min) + " "+ to_string(max);
    return answer;
}
