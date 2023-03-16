#include <iostream>
#include <vector>
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

	int M;
	cin>>M;
	for (int i = 0; i < M; i++) {
		int num;
		cin>>num;

		int start = 0;
		int end = N-1;

		int isExist = false;
		while(start<=end) {
			int mid = (start+end)/2;
			if (arr[mid] == num) {
				isExist = true;
				break;
			}
			else if (arr[mid] > num) {
				end = mid-1;
			}
			else if (arr[mid] < num) {
				start = mid+1;
			}

		}
		if (isExist) {
			cout<<"1"<<"\n";
		}
		else {
			cout<<"0"<<"\n";
		}
	}

	return 0;
}



