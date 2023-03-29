#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	typedef pair<int,int> adge;
	int N,M;
	cin>>N>>M;

	vector<vector<adge>> arr(N+1);
	vector<bool> visited(N+1);
	vector<int> cost(N+1,INT_MAX);
	priority_queue<adge,vector<adge>,greater<adge>> q;
	
	for (int i = 0; i < M; i++) {
		int s,e,w;
		cin>>s>>e>>w;
		arr[s].push_back(make_pair(e,w));
	}

	int S,E;
	cin>>S>>E;
	cost[S] = 0;
	q.push(make_pair(0,S));//cost, 인덱스
	while (!q.empty()) {
		adge tmp = q.top();
		q.pop();

		if (tmp.second == E) {
			break;
		}

		if (visited[tmp.second] == true) {
			continue;
		}
		visited[tmp.second] = true;

		for (int i = 0; i < arr[tmp.second].size(); i++) {
			int token = arr[tmp.second][i].first;
			int weight = arr[tmp.second][i].second;
			if (cost[token] > tmp.first + weight) {
				cost[token] = tmp.first + weight;
			}
			q.push(make_pair(cost[token],token));
		}
	}

	cout << cost[E] << "\n";
	return 0;
}

