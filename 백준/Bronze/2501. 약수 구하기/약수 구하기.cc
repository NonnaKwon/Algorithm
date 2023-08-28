#include <iostream>

using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;

	for (int i = 1, j = 0; i <= N; i++) 
	{
		if (N % i == 0)
		{
			j++;
			if (j == K)
			{
				cout << i << "\n";
				return 0;
			}
		}
	}

	cout << "0" << "\n";
	return 0;
}