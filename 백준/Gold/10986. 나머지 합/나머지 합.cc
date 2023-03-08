#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    
    //합 구해서 바로 M나머지 구하고 0이면 카운트 세고, 아니면 배열에 저장
    vector<long> C(m,0);
    long sum = 0;
    long count =0;
    for (int i = 0; i < n; i++) {
        int num;
        cin>>num;
        sum+=num;
        int remain = sum%m;
        if (remain == 0) {
            count++;
        }
        C[remain]++;
    }
    for (int i = 0; i < m; i++) {
        count += (C[i]*(C[i]-1))/2;
    }

    cout<<count;

    return 0;
}
