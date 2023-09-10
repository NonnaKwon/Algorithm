#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    long answer = 1;
    share = share > balls/2 ? balls-share : share;
    for(int i=1;i<=share ;i++)
    {
        answer *= balls-i+1;
        answer /= i;
    }
    return answer;
}