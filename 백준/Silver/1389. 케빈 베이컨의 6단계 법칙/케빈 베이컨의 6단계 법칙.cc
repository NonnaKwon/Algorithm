#include <iostream>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N,M;
	cin>>N>>M;
	int arr[101][101];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) {
				arr[i][j] = 0;
			}
			else {
				arr[i][j] = 5000000;
			}
		}
	}
	for (int i = 0; i < M; i++) {
		int s,e;
		cin>>s>>e;
		arr[s-1][e-1] = 1;
		arr[e-1][s-1] = 1;
	}

	for (int k = 0; k < N; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (arr[i][j] > arr[i][k] + arr[k][j]) {
					arr[i][j] = arr[i][k]+arr[k][j];
				}
			}
		}
	}

	int min = 5000001;
	int min_index =0;
	for (int i = 0; i < N; i++) {
		int sum = 0;
		for (int j = 0; j < N; j++) {
			sum += arr[i][j];
		}
		if (sum < min) {
			min = sum;
			min_index = i;
		}
	}
	cout<<min_index+1;

	return 0;
}

