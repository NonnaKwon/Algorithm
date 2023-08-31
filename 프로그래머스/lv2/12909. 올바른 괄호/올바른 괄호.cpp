#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int num = 0;
    
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i) == '(')
        {
            num++;
        }else if(s.at(i) == ')')
        {
            num--;
            if(num < 0) break;
        }
    }
    if(num != 0) answer = false;
    return answer;
}