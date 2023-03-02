#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;
    cin>>n>>k;

    int *arr= new int[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

//배열 뒤에서부터 검사. / 해서 결과값을 sum에 저장
//k -= 결과값 x arr[i] 해서 0이 될때까지 계속 진행.
//0되면 break
    int sum=0;
    for (int i = n - 1; i >= 0 && k!=0; i--) {
        int result = k/arr[i];
        sum+=result;
        k -= result*arr[i];
    }
    cout<<sum<<endl;
    return 0;
}
