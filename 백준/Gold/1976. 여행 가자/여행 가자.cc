#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;
void unionSet(int a,int b);
int find(int num);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,M;
	cin>>N>>M;

	arr = vector<int>(N+1,0);
	for (int i = 1; i < N + 1; i++) {
		arr[i] = i;
	}

	for (int i = 1; i < N + 1; i++) {
		for (int j = 1; j < N + 1; j++) {
			int num;
			cin>>num;
			if (num == 1) {
				unionSet(i,j);
			}
		}
	}

	int num1,num2;
	cin>>num1;
	num1 = find(num1);
	for (int i = 1; i < M; i++) {
		cin>>num2;
		num2 = find(num2);
		if (num1 != num2) {
			cout<<"NO"<<"\n";
			return 0;
		}
	}
	cout<<"YES"<<"\n";

	return 0;
}
void unionSet(int a, int b) {
	a = find(a);
	b = find(b);
	arr[b] = a;
}

int find(int num) {
	if (num == arr[num]) {
		return num;
	}
	else {
		return arr[num] = find(arr[num]);
	}
}