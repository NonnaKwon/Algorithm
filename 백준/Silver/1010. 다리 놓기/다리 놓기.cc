#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin>>T;

	long arr[31][31];

	for (int i = 0; i < 31; i++) {
		arr[i][0] = 1;
		arr[i][1] = i;
		arr[i][i] = 1;
	}

	for (int i = 2; i < 31; i++) {
		for (int j = 1; j < i; j++) {
			arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
		}
	}

	while (T--) {
		int n,m;
		cin>>n>>m;
		cout<<arr[m][n]<<"\n";
	}

	return 0;
}
