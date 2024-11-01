#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> mats, vector<vector<string>> park) {
    int answer = 0;
    
    // 위, 왼위, 왼 의 저장값을 확인하며, DP를 업데이트 한다.
    int N = park.size();
    int M = park[0].size();
    int findX[] = {0,-1,-1};
    int findY[] = {-1,-1,0};
    vector<vector<int>> dp(N,vector<int>(M,0));
    
    // 업테이트 하면서 max 값을 알아내고,
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(park[i][j] != "-1")
                continue;
            
            int count = 0;
            for(int k=0;k<3;k++)
            {
                int x = j + findX[k];
                int y = i + findY[k];
                if(x < 0 || y < 0 || x >= M || y >= N || dp[y][x] == 0)
                {
                    count = 0;
                    break;
                }
                
                if(count == 0 || count > dp[y][x])
                    count = dp[y][x];
            }
            
            dp[i][j] = count + 1;
            if(answer < dp[i][j])
                answer = dp[i][j];
        }
    }
    
    // mats에서 적절한 값을 answer에 담는다.
    sort(mats.begin(),mats.end());
    for(int i=mats.size()-1;i>=0;i--)
    {
        if(mats[i] <= answer)
        {
            answer = mats[i];
            return answer;
        }
    }
    return -1;
}