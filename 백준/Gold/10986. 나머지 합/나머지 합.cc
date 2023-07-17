#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,M;
    cin>>N>>M;

    long count =0;
    vector<long> R(M,0);

    long sum = 0;
    for (int i = 0; i < N; i++) {
        int num;
        cin>>num;

        sum+=num;
        long tmp = sum%M;
        R[tmp]++;
    }

    count += R[0];
    for (int i = 0; i<M ; i++) {
        count += R[i]*(R[i]-1)/2; //조합 iC2
    }

    
    cout<<count<<"\n";

    return 0;
}