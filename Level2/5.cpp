/*
피보나치 수는 F(0) = 0, F(1) = 1일 때, 1 이상의 n에 대하여 F(n) = F(n-1) + F(n-2) 가 적용되는 점화식입니다. 
2 이상의 n이 입력되었을 때, n번째 피보나치 수를 1234567으로 나눈 나머지를 리턴하는 함수, solution을 완성해 주세요.
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int fir = 0, sec = 1;
    if(n==1) return 1;
    for(int i =2; i<=n; i++){
        answer = (fir + sec)%1234567;
        fir = sec; sec = answer;
    }
    return answer;
}
