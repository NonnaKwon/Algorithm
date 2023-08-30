#include <iostream>
#include <algorithm>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + 3);
	
	if (arr[2] >= arr[0] + arr[1])
	{
		arr[2] = arr[0] + arr[1] - 1;
	}

	int result = 0;
	for (int i = 0; i < 3; i++)
	{
		result += arr[i];
	}

	cout << result << endl;
	return 0;
}