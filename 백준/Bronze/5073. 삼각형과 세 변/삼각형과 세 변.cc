#include <iostream>
#include <algorithm>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (true)
	{
		int arr[3];
		int max_index = 0;
		for (int i = 0; i < 3; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + 3);

		if (arr[0] == 0)
		{
			break;
		}

		if (arr[2] >= arr[0] + arr[1])
		{
			cout << "Invalid";
		}
		else if (arr[0] == arr[2])
		{
			cout << "Equilateral";
		}
		else if (arr[0] == arr[1] || arr[1] == arr[2])
		{
			cout << "Isosceles";
		}
		else
		{
			cout << "Scalene";
		}

		cout << "\n";		
	}

	return 0;
}