#include <iostream>
#include <vector>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//버블정렬
	int N;
	cin>>N;
	vector<int> arr(N,0);

	for (int i = 0; i < N; i++) {
		cin>>arr[i];
	}

	for (int i = N; i>0; i--) {
		for (int j = 0; j < i-1; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout<<arr[i]<<"\n";
	}
	
	return 0;
}
