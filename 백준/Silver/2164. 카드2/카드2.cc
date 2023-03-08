#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin>>N;

	queue<int> arr;
	for (int i = 1; i <= N; i++) {
		arr.push(i);
	}

	while (arr.size() > 1) {
		arr.pop();
		arr.push(arr.front());
		arr.pop();
	}

	cout<<arr.front()<<"\n";
	
	return 0;
}