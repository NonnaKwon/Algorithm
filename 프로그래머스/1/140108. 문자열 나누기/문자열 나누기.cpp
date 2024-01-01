#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int right = 0;
    int wrong = 0;
    char x = s[0];
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == x)
            right++;
        else
            wrong++;
        if(right == wrong)
        {
            answer++;
            right = 0;
            wrong = 0;
            if(i+1 < s.length())
                x = s[i+1];
        }
    }
    
    if(right != 0 || wrong != 0)
        answer++;
    return answer;
}