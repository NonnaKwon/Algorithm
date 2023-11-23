#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<bool> is(10 , false);
    for(int i : numbers)
        is[i] =true;
    for(int i=0;i<is.size();i++)
        if(!is[i]) answer += i;
    return answer;
}