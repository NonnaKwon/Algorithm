#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	vector<int> arr;
	for (int i = 0; i < N; i++) 
	{
		int num;
		cin >> num;
		arr.push_back(num);
	}

	sort(arr.begin(), arr.end());

	int count = 0;
	for (int i = N - 1; i > 0; i--) 
	{
		if (arr[i] >= M) 
		{
			continue;
		}

		for (int j = i - 1; j >= 0; j--) 
		{
			int sum = arr[i] + arr[j];
			if (sum < M) break;
			else if (sum == M)
			{
				count++;
				break;
			}
		}
	}
	
	cout << count;
	return 0;
}


