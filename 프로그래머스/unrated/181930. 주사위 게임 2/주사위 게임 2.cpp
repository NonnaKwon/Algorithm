#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c) {
    long long answer = a+b+c;
    vector<int> arr = {a,b,c};
    sort(arr.begin(),arr.end());
    if(arr[0] != arr[1] && arr[1] == arr[2])
        answer *= a*a + b*b + c*c;
    else if(arr[0] == arr[1])
    {
        answer *= a*a + b*b + c*c;
        if(arr[1]==arr[2])
            return answer *= (long long)a*a*a + b*b*b + c*c*c;
    }
    
    return answer;
}