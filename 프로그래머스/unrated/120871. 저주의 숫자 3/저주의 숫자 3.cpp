#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    while(n)
    {
        if(answer % 3 !=0 && answer%10 != 3 && answer/10%10 != 3)
            n--;
        answer++;
    }
    return answer-1;
}