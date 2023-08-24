#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	long tmp = 2;
	for (int i = 1; i <= N; i++)
	{
		tmp = tmp + (tmp - 1);
	}

	cout << tmp * tmp << "\n";
	return 0;
}