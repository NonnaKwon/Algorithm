#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <tuple>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	typedef tuple<int,int,int> adge;

	int N,M;
	cin>>N>>M;
	vector<long> distance(N+1,LONG_MAX);
	vector<adge> arr;
	
	for(int i=0;i<M;i++) {
		int A,B,C;
		cin>>A>>B>>C;
		arr.push_back(make_tuple(A,B,C));
	}

	distance[1] = 0;
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int s,e,w;
			tie(s,e,w) = arr[j];
			if (distance[s] != LONG_MAX && distance[e] > distance[s] + w) {
				distance[e] = distance[s] + w;
			}
		}
	}

	bool isLoop = false;
	

	for (int j = 0; j < M; j++) {
		int s, e, w;
		tie(s, e, w) = arr[j];
		if (distance[s] != LONG_MAX && distance[e] > distance[s] + w) {
			isLoop = true;
			break;
		}
	}

	if (isLoop) {
		cout<<"-1"<<"\n";
	}
	else {
		for (int i = 2; i <= N; i++) {
			if (distance[i] == LONG_MAX) {
				cout<<"-1"<<"\n";
			}
			else {
				cout<<distance[i]<<"\n";
			}
		}
	}
	return 0;
}

