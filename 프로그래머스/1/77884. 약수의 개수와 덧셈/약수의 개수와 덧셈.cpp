#include <string>
#include <vector>

using namespace std;

int countFunc(int num)
{
    int count = 0;
    for(int i=1;i<=num;i++)
        if(num%i == 0)
            count++;
    return count;
}
int solution(int left, int right) {
    int answer = 0;
    for(int i=left;i<=right;i++)
    {
        if(countFunc(i)%2==0)
            answer += i;
        else
            answer -= i;
    }
    return answer;
}