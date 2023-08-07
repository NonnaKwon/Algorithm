#include <iostream>
#include <queue>
using namespace std;
void swap(vector<int>& arr,int a,int b)
{
	int tmp = arr[a];
	arr[a] = arr[b];
	arr[b] = tmp;
}

int quick_sort(vector<int>& arr, int S, int E) {
	if (S + 1 == E) {
		if (arr[S] > arr[E]) {
			swap(arr,S,E);
		}
		return E;
	}

	int M = (S+E)/2;
	swap(arr,S,M);
	int pivot = arr[S];
	int i=S+1;
	int j=E;

	while (i <= j) {
		while (pivot < arr[j] && j>0) {
			j--;
		}

		while (pivot > arr[i] && i < arr.size() - 1) {
			i++;
		}

		if (i <= j) {
			swap(arr,i++,j--);
		}
	}

	arr[S] = arr[j];
	arr[j] = pivot;
	return j;
	
}

void find(vector<int>& arr, int S, int E, int k) {
	int result = quick_sort(arr, S, E);
	if (result == k) return;
	else if (result > k) find(arr, S, result - 1,k);
	else if (result < k) find(arr, result + 1, E,k);
}



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,k;
	cin>>N>>k;

	vector<int> arr(N,0);
	for (int i = 0; i < N; i++) {			
		cin>>arr[i];
	}

	find(arr,0,N-1,k-1);
	cout<<arr[k-1];
	

	return 0;
}