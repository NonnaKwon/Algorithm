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
	int count = 0;
	cin>>N>>M;
	
	arr = vector<int>(N+1,0);
	vector<int> truePerson;
	vector<vector<int>> party;
	for (int i = 0; i < N + 1; i++) {
		arr[i] = i;
	}
	
	int T;
	cin>>T;
	for (int i = 0; i < T; i++) {
		int num;
		cin>>num;
		truePerson.push_back(num);
	}

	for (int i = 0; i < M; i++) {
		int partyNum;
		cin>>partyNum;
		int first;
		cin>>first;
		vector<int> tmpArr;
		tmpArr.push_back(first);

		for (int j = 1; j < partyNum; j++) {
			int input;
			cin>>input;
			unionSet(first,input);
			tmpArr.push_back(input);
		}

		party.push_back(tmpArr);
	}

	for (int i = 0; i < M; i++) {
		bool trueParty = false;
		int findFirst = find(party[i][0]);
		for (int j = 0; j < T; j++) {
			int findtruePerson = find(truePerson[j]);
			if (findFirst == findtruePerson) {
				trueParty = true;
				break;
			}
		}
		if (trueParty == false) {
			count++;
		}
	}

	cout<<count<<"\n";

	
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