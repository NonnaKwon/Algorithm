#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin>>N;

	long long B[1001];
	B[0]=0;
	B[1]=1;
	B[2]=2;

	for (int i = 3; i <= N; i++) {
		B[i] = B[i-1]+B[i-2];
		B[i] %= 10007;
	}

	cout<<B[N]<<"\n";
	return 0;
}
