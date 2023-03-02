#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //1km 당 1리터 기름. 도시당 하나의 주유소, 도시마다 리터당 가격 다름. 최소비용

    int n;
    cin>>n;
    
    int *road = new int[n-1];
    for (int i = 0; i < n-1; i++) {
        cin>>road[i];
    }

    int *price = new int[n];
    for (int i = 0; i < n; i++) {
        cin>>price[i];
    }

//시작할 때 두번째 주유소로 갈 거리만큼 일단 주유하고 시작.
//sum에 비용 저장. 두번째 주유소비용과 비교, 최저주유소 low_price에 저장
//비교 후 저장. 반복

    int low_price = price[0];
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        if (low_price > price[i]) {
            low_price = price[i];
        }
        sum += road[i]*low_price;
    }

    cout<<sum;

    delete[] road;
    delete[] price;
    return 0;
}
