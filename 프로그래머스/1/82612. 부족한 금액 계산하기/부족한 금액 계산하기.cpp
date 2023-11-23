using namespace std;

long long solution(int price, int money, int count)
{
    long long realPrice = 0;
    for(int i=1;i<=count;i++)
        realPrice += price*i;
    return realPrice > money ? realPrice-money : 0;
}