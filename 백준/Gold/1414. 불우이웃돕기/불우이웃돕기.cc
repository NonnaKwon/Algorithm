#include <iostream>
#include <vector>
#include <tuple>
#include <queue>
#include <string>
using namespace std;

vector<int> arr;
void unionSet(int a,int b);
int find(int num);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	typedef tuple<int, int, int> edge;
	priority_queue<edge, vector<edge>, greater<edge>> q;
	int sum = 0;

	int N;
	cin>>N;

	for (int i = 0; i <= N; i++) {
		arr.push_back(i);
	}

	for (int i = 0; i < N; i++) {
		string input;
		cin>>input;
		for (int j = 0; j < N; j++) {
			char token = input.at(j);
			int tmp = 0;
			if ('a' <= token && token <= 'z') {
				tmp = (int)(token -'a')+1;
			}
			else if ('A' <= token && token <= 'Z') {
				tmp = (int)(token -'A')+27;
			}
			else if (tmp == 0) {
				continue;
			}
			if(i != j) q.push(make_tuple(tmp,i,j));
			sum += tmp;
		}
	}


	int count =0;
	while (count < N-1) {
		if (q.empty()) {
			cout << "-1" << "\n";
			return 0;
		}
		edge now = q.top();
		q.pop();
		int a = find(get<1>(now));
		int b = find(get<2>(now));
		if (a != b) {
			unionSet(a,b);
			sum -= get<0>(now);
			count++;
		}
	}

	cout<<sum<<"\n";

	return 0;
}

void unionSet(int a, int b) {
	a = find(a);
	b = find(b);
	arr[a] = b;
}

int find(int num) {
	if (arr[num] == num) {
		return num;
	}
	else {
		return arr[num] = find(arr[num]);
	}
}