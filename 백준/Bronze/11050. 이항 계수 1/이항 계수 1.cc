#include <iostream>
#include <vector>
#include <tuple>
#include <queue>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,K;
	cin>>N>>K;

	int arr[11][11];
	for (int i = 0; i <= N; i++) {
		arr[i][0] = 1;
		arr[i][1] = i;
		arr[i][i] = 1;
	}

	for (int i = 2; i <= N; i++) {
		for (int j = 1; j < i; j++) {
			arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
		}
	}
	
	cout<<arr[N][K]<<"\n";
	return 0;
}
