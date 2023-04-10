#include <iostream>
#include <stack>
#include <vector>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin>>n;

	vector<char> result;
	stack<int> arr;
	int count=1;
	bool isSuccess=true;
	for (int i = 0; i < n; i++) {
		int x;
		cin>>x;
		while (count <= x) {
			result.push_back('+');
			arr.push(count);
			count++;
		}
		if (arr.top() == x) {
			arr.pop();
			result.push_back('-');
		}
		else {
			cout<<"NO"<<"\n";
			isSuccess = false;
			break;
		}
	}

	if (isSuccess) {
		for (int i = 0; i < result.size(); i++) {
			cout<<result[i]<<"\n";
		}
	}
	return 0;
}
