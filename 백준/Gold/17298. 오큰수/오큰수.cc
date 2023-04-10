#include <iostream>
#include <vector>
#include <stack>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin>>N;
	vector<int> arr(N+1,0);
	for (int i = 1; i <= N; i++) {
		cin>>arr[i];
	}

	vector<int> NGE(N+1,0);
	stack<int> s;
	for (int i = N; i > 0; i--) {
		while (!s.empty() && s.top() <= arr[i]) {
			s.pop();
		}

		if (s.empty()) {
			NGE[i] = -1;
		}else if(s.top() > arr[i]) NGE[i] = s.top();

		s.push(arr[i]);
	}

	for (int i = 1; i <= N; i++) {
		cout<<NGE[i]<<" ";
	}

	
	return 0;
}
