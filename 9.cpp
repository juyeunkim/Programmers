/*
2차원 행렬 arr1과 arr2를 입력받아, arr1에 arr2를 곱한 결과를 반환하는 함수, solution을 완성해주세요.
*/

#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    int i=0,j=0,k=0;
    vector<int> result;
    int a = 0;
    while(1){
        if((i== arr1.size())) break;
        
        if(j == arr2.size()) {
            result.push_back(a);
            j = 0; k ++; a = 0;
            if(k == arr2[0].size() ){
                answer.push_back(result);
                result.clear();
                i++; k = 0;
            }
        }
        else{
            a += arr1[i][j] * arr2[j][k];
            j++;
        }
    }
    
    return answer;
}
