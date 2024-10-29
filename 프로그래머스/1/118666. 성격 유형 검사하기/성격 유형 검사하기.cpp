#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    map<char,int> m;
    m.insert({'R',0});
    m.insert({'T',0});
    m.insert({'C',0});
    m.insert({'F',0});
    m.insert({'J',0});
    m.insert({'M',0});
    m.insert({'A',0});
    m.insert({'N',0});
    
    // 계산
    int middle = 4;
    for(int i=0;i<survey.size();i++)
    {
        if(choices[i] < middle)
            m[survey[i][0]] += middle - choices[i];
        else if(choices[i] > middle)
            m[survey[i][1]] += choices[i] - middle;
    }
    
    // 무슨 유형인지 정하기
    answer += m['R'] >= m['T'] ? 'R' : 'T';
    answer += m['C'] >= m['F'] ? 'C' : 'F';
    answer += m['J'] >= m['M'] ? 'J' : 'M';
    answer += m['A'] >= m['N'] ? 'A' : 'N';
    return answer;
}