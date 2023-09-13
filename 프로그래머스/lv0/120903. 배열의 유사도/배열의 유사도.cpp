#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    for(string str : s1)
    {
        if(find(s2.begin(),s2.end(),str) != s2.end())
            answer++;
        else
            if(s2.back() == str)
                answer++;
    }
    return answer;
}