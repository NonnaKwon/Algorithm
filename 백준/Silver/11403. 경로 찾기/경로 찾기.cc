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
	
	int N;
	cin>>N;
	int arr[101][101];
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin>>arr[i][j];
			if (arr[i][j] == 0) {
				arr[i][j] = 1000000;
			}
		}
	}

	for (int k = 0; k < N; k++) {
		for (int s = 0; s < N; s++) {
			for (int e = 0; e < N; e++) {
				if (arr[s][e] > arr[s][k] + arr[k][e]) {
					arr[s][e] = arr[s][k]+arr[k][e];
				}
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] >= 1000000) {
				cout<<"0 ";
			}
			else {
				cout<<"1 ";
			}
		}
		cout<<"\n";
	}
	return 0;
}

