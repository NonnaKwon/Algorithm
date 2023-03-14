#include <iostream>
#include <queue>
using namespace std;

vector<vector<int>> arr;
vector<bool> visited;
void DFS(int i);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,M;
	cin>>N>>M;
	int result =0;

	arr.resize(N+1);
	visited = vector<bool>(N+1,false);
	for (int i = 0; i < M; i++) {
		int s,e;
		cin>>s>>e;
		arr[s].push_back(e);
		arr[e].push_back(s);
	}

	for (int i = 1; i <= N; i++) {
		if (visited[i] == false) {
			result++;
			DFS(i);
		}
	}
	
	cout<<result;

	return 0;
}

void DFS(int num) {
	visited[num] = true;
	for (int i = 0; i < arr[num].size(); i++) {
		int tmp = arr[num][i];
		if (visited[tmp] == false) {
			DFS(tmp);
		}
	}
}

