#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int V,E,K;
	cin>>V>>E;
	cin>>K;

	vector<vector<pair<int,int>>> arr(V+1);
	vector<bool> isVisited(V+1,false);
	vector<int> minDistance(V+1,200001);
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
	

	for (int i = 0; i < E; i++) {
		int u,v,w;
		cin>>u>>v>>w;
		arr[u].push_back(make_pair(v,w));
	}


	minDistance[K] = 0;
	q.push(make_pair(0,K));
	while (!q.empty()) {
		pair<int,int> now = q.top();
		q.pop();
		
		if (isVisited[now.second]) {
			continue;
		}
	
		isVisited[now.second] = true;
		for (int i = 0; i < arr[now.second].size(); i++) {
			int tmp = arr[now.second][i].first;
			int result = now.first + arr[now.second][i].second;
			if (result < minDistance[tmp]) {
				minDistance[tmp] = result;
				q.push(make_pair(result,tmp));
			}
		}

	}

	for (int i = 1; i < V + 1; i++) {
		if (minDistance[i] > 200000) {
			cout<<"INF"<<"\n";
		}
		else {
			cout<<minDistance[i]<<"\n";
		}
	}

	return 0;
}

