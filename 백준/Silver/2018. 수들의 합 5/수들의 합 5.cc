#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin>>N;

    int front = 0;
    int back = 1;  
    int count=0;
    long sum =back;

    while (back <= N) {
        if (sum < N) {
            back++;
            sum += back;
        }
        else if (sum > N) {
            front++;
            sum -= front;
        }
        else if (sum == N) {
            count++;
            back++;
            front++;
            sum += back;
            sum -= front;
        }
    }

    cout<<count<<"\n";

    return 0;
}