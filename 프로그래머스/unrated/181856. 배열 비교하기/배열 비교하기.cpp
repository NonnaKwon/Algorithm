#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int sum1=0,sum2=0;
    if(arr1.size() == arr2.size())
    {
        for(int i=0;i<arr1.size();i++)
        {
            sum1 += arr1[i];
            sum2 += arr2[i];
        }
        if(sum1 == sum2)
            return 0;
        return sum1>sum2 ? 1:-1;
    }
    return arr1.size()>arr2.size()?1:-1;
}