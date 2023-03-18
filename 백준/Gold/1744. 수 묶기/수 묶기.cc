#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	cin>>N;
	vector<int> arr(N,0);
	
	for (int i = 0; i < N; i++) {
		cin>>arr[i];
	}

	sort(arr.begin(),arr.end());
	
	int sum =0;
	int index = 0;
	for ( ; index < N - 1; index++) {
		if (arr[index]< 0 && arr[index + 1] <= 0) {
			sum+=arr[index]*arr[index +1];
			index++;
		}
		else if (arr[index] > 1) {
			break;
		}
		else {
			sum+=arr[index];
		}
	}

	for (int i = N - 1; i >= index; i--) {
		if (i - index >= 1) {
			sum+=arr[i]*arr[i-1];
			i--;
		}
		else {
			sum+=arr[i];
		}
	}

	cout<<sum<<"\n";
	return 0;
}



