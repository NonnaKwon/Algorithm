#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    if(ineq.compare("<")==0)
    {
        if(eq.compare("=")==0)
            return n<=m?1:0;
        else
            return n<m?1:0;
    }else
    {
        if(eq.compare("=")==0)
            return n>=m?1:0;
        else
            return n>m?1:0;
    }
}