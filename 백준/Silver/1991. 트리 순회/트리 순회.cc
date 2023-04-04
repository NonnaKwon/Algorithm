#include <iostream>
#include <vector>
#include <tuple>
#include <queue>
using namespace std;

vector<vector<int>> arr;
int emptyNum = '.'-'A'+1;
void frontCircuit(int num);
void middleCircuit(int num);
void backCircuit(int num);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin>>N;
	arr.resize(N+1);

	char node, left, right;
	int node_n, left_n, right_n;
	for (int i = 1; i < N+1; i++) {
		cin>>node>>left>>right;
		node_n = node-'A'+1;
		left_n = left-'A'+1;
		right_n = right-'A'+1;
		arr[node_n].push_back(left_n);
		arr[node_n].push_back(right_n);
	}
	frontCircuit(1);
	cout<<"\n";
	middleCircuit(1);
	cout << "\n";
	backCircuit(1);
	cout << "\n";
	
	return 0;
}

void frontCircuit(int num) {
	if (num == emptyNum) return;
	cout << (char)(num + 'A' - 1);
	frontCircuit(arr[num][0]);
	frontCircuit(arr[num][1]);
}
void middleCircuit(int num) {
	if(num==emptyNum) return;
	middleCircuit(arr[num][0]);
	cout << (char)(num + 'A' - 1);
	middleCircuit(arr[num][1]);
}
void backCircuit(int num) {
	if (num == emptyNum) return;
	backCircuit(arr[num][0]);
	backCircuit(arr[num][1]);
	cout << (char)(num + 'A' - 1);
}
