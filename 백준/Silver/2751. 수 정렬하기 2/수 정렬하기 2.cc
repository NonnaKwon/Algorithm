#include <iostream>
#include <queue>
using namespace std;

void merge_sort(int S,int E);
vector<int> arr;
vector<int> tmp;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin>>N;
	
	tmp = vector<int>(N,0);
	for (int i = 0; i < N; i++) {			
		int num;
		cin>>num;
		arr.push_back(num);
	}

	merge_sort(0,N-1);
	for (int i = 0; i < N; i++) {
		cout<<arr[i]<<"\n";
	}
	

	return 0;
}

void merge_sort(int S, int E) {
	if (E==S) {
		return;
	}

	int M = S+(E-S)/2;
	merge_sort(S,M);
	merge_sort(M+1,E);

	for (int i = S; i <= E; i++) {
		tmp[i] = arr[i];
	}

	int k=S;
	int index1 = S;
	int index2 = M+1;

	while (index1 <= M && index2 <= E) {
		if (tmp[index1] > tmp[index2]) {
			arr[k] = tmp[index2];
			k++; index2++;
		}
		else {
			arr[k] = tmp[index1];
			k++; index1++;
		}
	}

	while (index1 <= M) {
		arr[k] = tmp[index1];
		k++; index1++;
	}

	while (index2 <= E) {
		arr[k] = tmp[index2];
		k++; index2++;
	}

}
