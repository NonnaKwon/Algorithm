#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int size = numbers.size();
    sort(numbers.begin(),numbers.end());
    
    int length1 = numbers[0]*numbers[1];
    int length2 = numbers[size-1]*numbers[size-2];
    
    return length1 > length2 ? length1:length2;
}