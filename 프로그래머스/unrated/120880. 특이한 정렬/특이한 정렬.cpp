#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int k;
bool compare(int num1,int num2)
{
    return abs(num1-k)==abs(num2-k)?num1>num2:abs(num1-k)<abs(num2-k);
}

vector<int> solution(vector<int> numlist, int n) {
    k = n;
    sort(numlist.begin(),numlist.end(),compare);
    return numlist;
}