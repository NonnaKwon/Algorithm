#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    //정렬한다
    sort(arr,arr+n);
    //sum에 차례로 더한다
    /*
    for 0~n 이중중첩    
*/

    int sum=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            sum+=arr[j];
        }
    }
    cout<<sum<<endl;;
    return 0;
}

