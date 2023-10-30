#include <string>
#include <vector>

using namespace std;
bool isPrime(int num)
{
    for(int i=2;i<num;i++)
    {
        if(num%i == 0)
            return false;
    }
    return true;
}

int solution(int a, int b) {
    int i=2;
    while(i<=b)
    {
        if(b%i == 0 && isPrime(i))
        {
            if(i!= 2 && i!= 5)
            {
                if(a%i!=0)
                    return 2;
                else
                    a /= i;
            }
            b /= i;
        }
        else
            i++;
    }
    return 1;
}