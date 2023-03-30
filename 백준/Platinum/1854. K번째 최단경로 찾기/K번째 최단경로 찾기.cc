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
	int n,m,k;
	cin>>n>>m>>k;
	vector<vector<adge>> arr(n+1);
	vector<priority_queue<int>> result(n+1);

	for (int i = 0; i < m; i++) {
		int s,e,w;
		cin>>s>>e>>w;
		arr[s].push_back(make_pair(e,w));
	}

	priority_queue<adge,vector<adge>,greater<adge>> q;
	result[1].push(0);
	q.push(make_pair(0,1));
	while (!q.empty()) {
		adge now = q.top();
		q.pop();
		int index = now.second;
		for (int i = 0; i < arr[index].size(); i++) {
			int now_value = now.first + arr[index][i].second;
			int token_index = arr[index][i].first;
			if (result[token_index].size() < k) {
				result[token_index].push(now_value);
				q.push(make_pair(now_value,token_index));
			}
			else {
				if (result[token_index].top() > now_value) {
					result[token_index].pop();
					result[token_index].push(now_value);
					q.push(make_pair(now_value, token_index));
				}
			}
		}
	}

	for (int i = 1; i < n + 1; i++) {
		if (result[i].size() < k) {
			cout<<"-1"<<"\n";
		}
		else {
			cout<<result[i].top()<<"\n";
		}
	}

	return 0;
}

