#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    vector<bool> tmp(201,false);
    for(int i=0;i<numbers.size();i++)
    {
        for(int j=i+1;j<numbers.size();j++)
        {
            tmp[numbers[j]+numbers[i]]=true;
        }
    }
    for(int i=0;i<tmp.size();i++)
        if(tmp[i])
            answer.push_back(i);
    return answer;
}