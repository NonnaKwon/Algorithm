#include <string>
#include <vector>

using namespace std;

int gcd(int n,int m)
{
    if(m == 0)
        return n;
    return n>m?gcd(m,n%m):gcd(n,m%n);
}
vector<int> solution(int n, int m) {
    vector<int> answer;
    int GCD = gcd(n,m);
    answer.push_back(GCD);
    answer.push_back(n*m/GCD);
    return answer;
}