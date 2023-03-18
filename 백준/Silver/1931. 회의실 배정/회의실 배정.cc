#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	cin>>N;
	vector<pair<int,int>> arr(N);
	
	int num1,num2;
	for (int i = 0; i < N; i++) {
		cin>>num1>>num2;
		arr[i].first = num2;
		arr[i].second = num1;
	}

	sort(arr.begin(),arr.end());
	int count = 1;
	pair<int,int> index;
	index.first = arr[0].first;
	index.second = arr[0].second;
	for (int i = 0; i < N-1; i++) {
		if (index.first <= arr[i + 1].second) {
			index.first = arr[i+1].first;
			index.second = arr[i+1].second;
			count++;
		}
	}

	cout<<count<<'\n';
	
	return 0;
}



