#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void swap(int a,int b);
vector<int> arr;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,M;
	cin>>N>>M;

	for (int i = 0; i <= N; i++) {
		arr.push_back(i);
	}
	for (int i = 0; i < M; i++) {
		int a,b;
		cin>>a>>b;
		while (a < b) {
			swap(a,b);
			a++;
			b--;
		}
	}

	for (int i = 1; i <= N; i++) {
		cout<<arr[i]<<" ";
	}

	return 0;
}
void swap(int a, int b) {
	int tmp = arr[a];
	arr[a] = arr[b];
	arr[b] = tmp;
}