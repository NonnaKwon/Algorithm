#include <iostream>
#include <vector>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,M;
	cin>>N>>M;
	
	vector<vector<int>> arr(N+1);
	vector<int> D(N+1,0);

	for (int i = 0; i < M; i++) {
		int A,B;
		cin>>A>>B;
		arr[A].push_back(B);
		D[B]++;
	}

	int count =0;
	while (count < N) {
		for (int i = 1; i < N + 1; i++) {
			if (D[i] == 0) {
				cout<<i<<" ";
				D[i] = -1;
				for (int j = 0; j < arr[i].size();j++) {
					int tmp = arr[i][j];
					D[tmp]--;
				}
				count++;
			}
		}
	}
	
	return 0;
}

