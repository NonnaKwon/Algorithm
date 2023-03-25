#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int N, M,K,X;
vector<vector<int>> arr;
vector<int> isVisited;
void BFS(int num);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N >> M>>K>>X;
	arr.resize(N+1);
	isVisited = vector<int>(N+1,0);
	for (int i = 0; i < M; i++) {
		int A,B;
		cin>>A>>B;
		arr[A].push_back(B);
	}

	BFS(X);
	bool suc = false;
	for (int i = 1; i <= N; i++) {
		if (isVisited[i] == (K+1)) {
			cout<<i<<'\n';
			suc = true;
		}
	}
	if (suc == false) {
		cout<<"-1";
	}

	return 0;
}

void BFS(int num) {
	queue<int> q;
	isVisited[num] = 1;

	q.push(num);
	while (!q.empty()) {
		int front = q.front();
		q.pop();

		int size = arr[front].size();
		for (int i = 0; i < size; i++) {
			int tmp = arr[front][i];
			if (isVisited[tmp] == 0) {
				q.push(tmp);
				isVisited[tmp] = isVisited[front]+1;
			}
		}
	}
}
