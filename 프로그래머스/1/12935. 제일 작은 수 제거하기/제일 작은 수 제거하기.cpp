#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = arr[0];
    for(int num : arr)
    {
        if(min >num)
            min = num;
    }
    
    for(int num : arr)
    {
        if(min != num)
            answer.push_back(num);
    }
    
    if(answer.size() == 0)
        answer.push_back(-1);
    return answer;
}