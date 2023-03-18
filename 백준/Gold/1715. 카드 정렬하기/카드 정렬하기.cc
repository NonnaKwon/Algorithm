#include <iostream>
#include <queue>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	cin>>N;
	priority_queue<int,vector<int>,greater<int>> arr;
	
	for (int i = 0; i < N; i++) {
		int num;
		cin>>num;
		arr.push(num);
	}

	int result = 0;
	int sum=0;

	while (arr.size() > 1) {
		sum = arr.top();
		arr.pop();
		sum+= arr.top();
		arr.pop();

		result += sum;
		arr.push(sum);
		sum=0;
	}

	cout<<result;
	
	return 0;
}



