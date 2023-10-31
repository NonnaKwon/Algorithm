#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,int> num1,pair<int,int> num2)
{
    return num1.first>num2.first;
}
vector<int> solution(vector<vector<int>> score) {
    vector<int> answer(score.size(),0);
    vector<pair<int,int>> mean;
    
    for(int i=0;i<score.size();i++)
        mean.push_back(make_pair(((score[i][0]+score[i][1])),i));
    
    sort(mean.begin(),mean.end(),compare);
    
    int count = 1;
    answer[mean[0].second] = count;
    for(int i=1;i<mean.size();i++)
    {
        count++;
        if(mean[i].first == mean[i-1].first)
            answer[mean[i].second] = answer[mean[i-1].second];
        else
            answer[mean[i].second] = count;
    }
    
    return answer;
}