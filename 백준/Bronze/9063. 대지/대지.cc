#include <iostream>
#include <algorithm>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int max_x = -10001;
	int min_x = 10001;
	int max_y = -10001;
	int min_y = 10001;

	while (N--)
	{
		int x, y;
		cin >> x >> y;
		if (max_x < x)
		{
			max_x = x;
		}
		if (min_x > x)
		{
			min_x = x;
		}

		if (max_y < y)
		{
			max_y = y;
		}
		if (min_y > y)
		{
			min_y = y;
		}
	}

	long long result = (long long)(max_x - min_x) * (max_y - min_y);
	cout << result << endl;
	return 0;
}