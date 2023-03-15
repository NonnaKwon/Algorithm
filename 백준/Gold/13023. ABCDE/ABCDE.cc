#include <iostream>
#include <queue>
using namespace std;

vector<vector<int>> arr;
vector<bool> isVisited;
bool success = false;
void DFS(int num,int count);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,M;
	cin>>N>>M;

	isVisited = vector<bool>(N,false);
	arr.resize(N);

	for (int i = 0; i < M; i++) {
		int s,e;
		cin>>s>>e;
		arr[s].push_back(e);
		arr[e].push_back(s);
	}

	for (int i = 0; i < N; i++) {
		if (isVisited[i] == false) {
			DFS(i,1);
		}

		if (success == true) {
			cout << "1";
			return 0;
		}
	}

	cout<<"0";
	return 0;
}

void DFS(int num,int count) {
	isVisited[num] = true;
	if (count == 5 || success == true) {
		success = true;
		return;
	}

	for (int i = 0; i < arr[num].size(); i++) {
		int tmp = arr[num][i];
		if (isVisited[tmp] == false) {
			DFS(tmp,count+1);
		}
	}
	isVisited[num] = false;
}
