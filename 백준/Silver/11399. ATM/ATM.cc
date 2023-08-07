#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		pq.push(num);
	}
	
	int sum = 0;
	int S = 0;
	for (int i = 0; i < N; i++)
	{
		S += pq.top();
		pq.pop();
		sum += S;
	}

	cout << sum << "\n";
}


