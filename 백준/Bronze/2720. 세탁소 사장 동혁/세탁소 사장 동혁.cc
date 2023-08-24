#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		int C;
		cin >> C;
		cout << C / 25 << " ";
		C %= 25;
		cout << C / 10 << " ";
		C %= 10;
		cout << C / 5 << " ";
		C %= 5;
		cout << C << "\n";
	}

	return 0;
}