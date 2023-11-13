#include <iostream>
#include <vector>
using namespace std;



int main() {
	vector<long long> D;
	int N;
	cin >> N;

	D.resize(N + 1);
	D[1] = 1;
	D[2] = 2;
	for (int i = 3; i <= N; i++)
	{
		D[i] = D[i - 1] + D[i - 2];
		D[i] %= 10007;
	}

	cout << D[N];
	return 0;
}