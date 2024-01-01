#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> sportClass(n+1,1);
    for(int num : lost)
        sportClass[num]--;
    for(int num : reserve)
        sportClass[num]++;
    for(int i=1;i<=n;i++)
    {
        if(sportClass[i] == 0)
        {
            if(sportClass[i-1] == 2)
            {
                sportClass[i-1]--;
                sportClass[i]++;
            }
        }else if(sportClass[i-1] == 0)
        {
            if(sportClass[i] == 2)
            {
                sportClass[i]--;
                sportClass[i-1]++;
            }
        }
    }
    return n-count(sportClass.begin(),sportClass.end(),0);
}