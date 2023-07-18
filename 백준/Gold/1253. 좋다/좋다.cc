#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	vector<long long> A;
	for (int i = 0; i < N; i++)
	{
		long long num;
		cin >> num;
		A.push_back(num);
	}

	sort(A.begin(), A.end());

	int count = 0;
	for (int i = N - 1; i >= 0; i--)
	{
		long long M = A[i];
		int j = N - 1;
		int t = 0;
		while (j > t)
		{
			long long sum = A[j] + A[t];
			if (sum > M)
			{
				j--;
			}
			else if (sum < M)
			{
				t++;
			}
			else if (sum == M)
			{
				if (j == i)
				{
					j--;
				}
				else if (t == i)
				{
					t++;
				}
				else
				{
					count++;
					break;
				}
			}
		}
	}

	cout << count;
	return 0;
}


