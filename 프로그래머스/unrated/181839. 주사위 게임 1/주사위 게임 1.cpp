#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    if(a%2==1)
    {
        if(b%2==1)
            return a*a+b*b;
        else
            return 2*(a+b);
    }else
    {
        if(b%2==1)
            return 2*(a+b);
        else
            return a>b?a-b:b-a;
    }
}