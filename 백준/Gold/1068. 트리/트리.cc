#include <iostream>
#include <vector>
#include <tuple>
#include <queue>
using namespace std;

vector<vector<int>> arr;
vector<int> inputArr;
vector<bool> isDelete;
vector<int> son;
int N;
void DFS(int num);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin>>N;

	arr.resize(N);
	isDelete = vector<bool>(N,false);

	for (int i = 0; i < N; i++) {
		int input;
		cin>>input;
		inputArr.push_back(input);
		if(input == -1) continue;
		arr[input].push_back(i);
	}

	son = vector<int>(N,0);
	for (int i = 0; i < N; i++) {
		son[i] = arr[i].size();
	}

	int del;
	cin>>del;

	if (inputArr[del] == -1) {
		cout<<"0"<<"\n";
		return 0;
	}

	DFS(del);
	
	int result = 0;
	for (int i = 0; i < N; i++) {
		if (!isDelete[i] && son[i] == 0) {
			result++;
		}
	}

	cout<<result<<"\n";
	
	return 0;
}

void DFS(int num) {
	isDelete[num] = true;
	son[inputArr[num]]--;

	for (int token : arr[num]) {
		DFS(token);
	}
}
