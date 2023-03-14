#include <iostream>
#include <queue>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin>>N;
	
	vector<int> arr(10001,0);
	for (int i = 0; i < N; i++) {
		int num;
		cin>>num;
		arr[num]++;
	}

	for (int i = 0; i < arr.size(); i++) {
		while (arr[i] > 0) {
			cout<<i<<"\n";
			arr[i]--;
		}
	}

	return 0;
}

