#include <iostream>
#include <vector>
#include <tuple>
#include <queue>
using namespace std;


vector<int> result;
int find(int num);
void unionSet(int a,int b);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	typedef tuple<int,int,int> edge;
	int sum = 0;
	int count=0;
	int V,E;
	cin>>V>>E;

	priority_queue<edge,vector<edge>,greater<edge>> arr;
	result = vector<int>(V+1,0);
	for (int i = 1; i <= V; i++) {
		result[i] = i;
	}

	for (int i = 0; i < E; i++) {
		int A,B,C;
		cin>>A>>B>>C;
		arr.push(make_tuple(C,A,B));
	}


	for (int i = 0; i < E; i++) {
		edge token = arr.top();
		arr.pop();
		int a = find(get<1>(token));
		int b = find(get<2>(token));

		if(a==b) 
			continue;

		unionSet(a, b);
		count++;
		sum += get<0>(token);

		if (count == V - 1) {
			break;
		}
	}

	cout<<sum<<"\n";
	return 0;
}

int find(int num) {
	if (result[num] == num) {
		return num;
	}
	else {
		return result[num] = find(result[num]);
	}
}

void unionSet(int a, int b) {
	a = find(a);
	b = find(b);
	result[a] = b;
}