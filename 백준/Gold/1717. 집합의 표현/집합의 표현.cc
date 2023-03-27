#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> arr;
void unionSet(int a,int b);
int find(int num);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n,m;
	cin>>n>>m;

	arr = vector<int>(n+1,0);
	for (int i = 0; i < n + 1; i++) {
		arr[i] = i;
	}

	for (int i = 0; i < m; i++) {
		int input,a,b;
		cin>>input>>a>>b;
		if (input == 0) {
			unionSet(a,b);
		}
		else if (input == 1) {
			int a_jang = find(a);
			int b_jang = find(b);
			if (a_jang == b_jang) {
				cout<<"yes"<<"\n";
			}
			else {
				cout<<"no"<<"\n";
			}
		}
	}

	return 0;
}

void unionSet(int a, int b) {
	a = find(a);
	b = find(b);
	if (a != b) {
		arr[b] = a;
	}
}

int find(int num) {
	if (num == arr[num]) {
		return num;
	}
	else {
		int value = find(arr[num]);
		arr[num] = value;
		return value;
	}
}
