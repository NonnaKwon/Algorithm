#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin>>N;

	long long B[91][2];
	B[1][0] = 0;
	B[1][1] = 1;

	for (int i = 2; i <= N; i++) {
		B[i][0] = B[i-1][1]+B[i-1][0];
		B[i][1] = B[i-1][0];
	}

	cout<<B[N][0]+B[N][1]<<"\n";
	return 0;
}
