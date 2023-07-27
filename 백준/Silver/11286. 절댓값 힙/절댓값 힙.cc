#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

struct compare
{
	bool operator()(int& num1, int& num2)
	{
		if (abs(num1) == abs(num2))
		{
			return num1 > num2;
		}
		return abs(num1) > abs(num2);
	}
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	priority_queue<int, vector<int>, compare> pq;
	vector<int> result;
	while (N--)
	{
		int num;
		cin >> num;
		if (num == 0)
		{
			if (pq.size() == 0) result.push_back(0);
			else 
			{
				result.push_back(pq.top());
				pq.pop();
			}
		}
		else
		{
			pq.push(num);
		}
	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << '\n';
	}
}


