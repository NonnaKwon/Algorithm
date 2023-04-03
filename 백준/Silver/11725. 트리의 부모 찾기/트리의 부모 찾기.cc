#include <iostream>
#include <vector>
#include <tuple>
#include <queue>
using namespace std;

int N;
vector<vector<int>> arr;
vector<bool> visited;
vector<int> parent;
void BFS(int num);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin>>N;
	arr.resize(N+1);
	visited = vector<bool>(N+1,false);
	parent = vector<int>(N+1);

	for (int i = 0; i < N - 1; i++) {
		int a,b;
		cin>>a>>b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}

	BFS(1);
	
	for (int i = 2; i <= N; i++) {
		cout<<parent[i]<<"\n";
	}

	return 0;
}

void BFS(int num) {
	queue<int> q;
	visited[num] = true;
	q.push(num);
	
	while (!q.empty()) {
		int now = q.front();
		visited[now] = true;
		q.pop();
		for (int token : arr[now]) {
			if (!visited[token]) {
				q.push(token);
				parent[token] = now;
			}
		}
	}
}