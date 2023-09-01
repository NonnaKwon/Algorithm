#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    vector<int> arr(10,0);
    
    for(int i=0;i<priorities.size();i++)
    {
        arr[priorities[i]]++;
    }
    
    int pointer = 0;
    int i=9;
    while(i>0)
    {
        if(arr[i]==0)
        {
            i--;   
        }
        else if(arr[i] > 0)
        {
            if(priorities[pointer] == i)
            {
                answer++;
                arr[i]--;
                if(pointer == location)
                    return answer;
            }
            pointer++;
            if(pointer > priorities.size())
                pointer = 0;
        }
    }
    
    return answer;
}