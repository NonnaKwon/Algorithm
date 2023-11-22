#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    //등차수열합 -> 1~N => N(N+1)/2
    vector<int> answer;
    for(int i=1;;i++)
    {
        int tmp = i-num;
        int cal = 0;
        if(tmp<0)
        {
            tmp++;
            cal = i*(i+1)/2 + tmp*(-1*tmp+1)/2;   
        }
        else
        {
            cal = i*(i+1)/2 - tmp*(tmp+1)/2;
            tmp++;
        }
        
        //정답 넣기
        if(cal == total)
        {
            for(int j=tmp;j<=i;j++)
            {
                answer.push_back(j);
            }
            break;
        }
    }
    return answer;
}